/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103240
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
    var_13 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209))))));
    var_14 = ((/* implicit */signed char) var_2);
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)205)))), (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)7))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max(((-(-599410528))), (((/* implicit */int) (unsigned char)51)))))));
        var_17 = ((/* implicit */int) min((var_17), (max((min((-1), (((/* implicit */int) (signed char)117)))), (((/* implicit */int) (unsigned char)209))))));
        arr_2 [i_0 + 1] = ((/* implicit */short) min((var_7), (((/* implicit */unsigned int) min((var_11), (arr_0 [i_0 - 1]))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (unsigned char)224))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)-50)) || (((/* implicit */_Bool) (unsigned short)28252)))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(arr_8 [i_1] [i_2] [i_3 - 1] [i_1])));
                    arr_10 [i_3 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            arr_14 [i_1] [i_4] = ((/* implicit */unsigned long long int) var_12);
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                {
                    for (signed char i_7 = 4; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_24 [i_6] [i_4] [i_7] [i_1] [i_4] = ((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned long long int) -116333416224473707LL))));
                            arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 - 1] [i_5] [i_5 - 1])) ? (-8) : (((/* implicit */int) arr_1 [i_4 + 4]))));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_23 [i_1] [i_4] [i_5] [i_6 - 1] [i_5]);
                        }
                    } 
                } 
            } 
            var_21 &= ((/* implicit */unsigned int) var_0);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_20 [i_4] [i_4] [i_4 + 3] [i_4 + 2] [i_4] [i_4 + 2]))))));
            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)35295))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) var_7);
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_8])) && (((/* implicit */_Bool) var_9))))) : (min((((/* implicit */int) max(((unsigned short)57095), (arr_17 [i_8] [i_8] [i_8] [i_8])))), ((+(((/* implicit */int) var_12))))))));
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned short) var_11);
        var_24 = ((/* implicit */short) 2959790215789453717ULL);
    }
}
