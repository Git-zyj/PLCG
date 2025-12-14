/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127683
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 &= ((/* implicit */_Bool) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_6))))))));
    var_18 = (+(var_12));
    var_19 = ((/* implicit */unsigned long long int) var_12);
    var_20 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) var_15)) ^ (var_9)))));
        arr_3 [(unsigned short)2] = ((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_5)))))))));
        var_22 = ((/* implicit */unsigned short) (+((((-(var_16))) ^ (var_16)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [(unsigned short)19] [(unsigned short)17] [0] [7ULL] [(unsigned char)9] [(_Bool)1] = ((/* implicit */unsigned char) max(((+(var_10))), ((~(((/* implicit */int) var_13))))));
                        arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) < (((/* implicit */int) var_0))))))));
                        arr_13 [i_2] [(_Bool)1] = ((/* implicit */_Bool) (((~(var_8))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))))))));
                        arr_14 [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) && (max((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15)))), ((!(((/* implicit */_Bool) var_1))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
        arr_19 [i_4] [(unsigned short)17] = ((((/* implicit */unsigned int) (+(var_15)))) + (var_7));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_13))));
                        arr_29 [i_6] [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_2))))));
                        arr_30 [i_4] [i_6] [(unsigned char)2] [i_4] = ((/* implicit */int) ((((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    }
                    arr_31 [(unsigned short)22] [i_5] [i_6] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_9)));
    }
}
