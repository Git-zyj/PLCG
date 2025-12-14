/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10934
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)9)))))));
            var_12 = ((/* implicit */unsigned short) ((var_7) / (((/* implicit */long long int) 108824168))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_13 |= ((/* implicit */short) ((((int) 1548836222749335647ULL)) >= ((+(((/* implicit */int) ((unsigned short) var_4)))))));
            var_14 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_10))))) && (((/* implicit */_Bool) var_6))))), (min(((+(var_7))), (((/* implicit */long long int) (+(var_5))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_15 = ((/* implicit */_Bool) ((unsigned long long int) max((1548836222749335647ULL), (1548836222749335647ULL))));
            var_16 = (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_8))), (((/* implicit */unsigned long long int) (-(196423946U)))))));
        }
        for (short i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((144115188075855871ULL) - ((((-(var_2))) * (((/* implicit */unsigned long long int) max((var_3), (196423946U))))))));
            var_18 |= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_4)), (var_1)))));
            var_19 = ((/* implicit */_Bool) min((max((((unsigned long long int) var_5)), (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 196423951U)))) || (((/* implicit */_Bool) var_8)))))));
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_0), ((~(max((((/* implicit */long long int) (unsigned short)0)), (var_0)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((max((var_2), (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 636005831U))))))))));
                                var_22 -= ((/* implicit */unsigned char) (-(max((max((var_0), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (~(4098543349U))))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned short) max((((/* implicit */int) ((short) var_7))), ((~(((/* implicit */int) (_Bool)0))))));
                    var_24 = ((/* implicit */short) var_9);
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) (((~(var_9))) + (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-1))) >= ((~(((/* implicit */int) var_6)))))))));
    }
    var_26 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))) / (max((((/* implicit */unsigned long long int) (unsigned char)14)), (18073917336469546630ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((((/* implicit */_Bool) 196423922U)) && (((/* implicit */_Bool) var_8))))))))));
    var_27 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))))) || (((/* implicit */_Bool) var_10))));
}
