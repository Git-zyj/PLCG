/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171891
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((-(var_6))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (var_10))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
                        var_16 = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) var_3)))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */int) var_8)) + (var_9)))))));
            arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((var_3), (((/* implicit */int) var_12))))) < (((((/* implicit */_Bool) var_13)) ? (var_11) : (var_11)))));
        }
        arr_13 [i_0] [i_0] = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_18 = max(((-(((/* implicit */int) ((var_3) == (((/* implicit */int) var_0))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        arr_22 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) - (var_5)))) && (((/* implicit */_Bool) ((var_1) / (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+((-(var_10))))))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = (+(((((/* implicit */int) var_12)) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_5))) - (4243346441U))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned short i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((((+(var_2))) << (((((/* implicit */int) var_12)) - (14520))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_5)))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((var_3) <= (((/* implicit */int) var_12)))))))) : (((var_10) >> (((var_3) - (649937471)))))));
                }
            } 
        } 
    }
    var_22 = var_3;
}
