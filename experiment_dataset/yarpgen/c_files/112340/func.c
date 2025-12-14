/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112340
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)178)), (((int) (short)10342))))) ^ (((long long int) max((var_6), (var_10)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_13 = ((unsigned long long int) min((8191U), (((/* implicit */unsigned int) var_10))));
                            var_14 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2584213851U)) : (arr_4 [i_2] [i_2])))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) == (241582447)))), ((signed char)66)));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (max((((/* implicit */long long int) (signed char)66)), (arr_4 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967295U)))))))) : (min((3297362856347217628LL), (((/* implicit */long long int) var_2))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned short) ((int) (unsigned char)0));
                                var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_5)), (var_11))))), (((/* implicit */unsigned int) ((((int) (_Bool)1)) - (((/* implicit */int) ((unsigned char) var_8))))))));
                            }
                            arr_13 [i_1] = ((/* implicit */short) ((long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_5 [i_2] [i_3]))), (((/* implicit */unsigned int) ((arr_1 [i_3]) + (((/* implicit */int) arr_2 [i_0]))))))));
                            var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)16)), (356822631U))) < (((/* implicit */unsigned int) (-(arr_1 [0]))))))), (min((-1), (((/* implicit */int) ((signed char) (unsigned char)225)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = max((((/* implicit */int) ((((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)511)))) == (min((var_4), (var_10)))))), (min((max((var_1), (((/* implicit */int) var_8)))), (((/* implicit */int) min(((unsigned short)65510), (((/* implicit */unsigned short) (short)-28286))))))));
}
