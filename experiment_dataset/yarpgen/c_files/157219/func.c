/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157219
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [(short)2] [i_0 - 2]))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */short) (((~(((/* implicit */int) var_9)))) << (((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) min((var_7), (var_2)))))))));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2] [16LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-11)))))));
                        var_13 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 1600101198U)) & (-729417062314387954LL))), (((/* implicit */long long int) (short)32767))));
                    }
                    arr_10 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-94))));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) min((((((/* implicit */int) (short)-8372)) != (((/* implicit */int) var_1)))), (((2097151U) <= (4294967295U)))))) != ((~(((/* implicit */int) (!(((/* implicit */_Bool) -8182017957560508178LL)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)8))));
                        var_16 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)80))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_5]))));
                            var_18 = ((/* implicit */short) (signed char)-40);
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) (~((~(10834718414070345985ULL)))));
                            arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (arr_5 [i_0] [i_7] [i_7])));
                            arr_21 [i_0] [3ULL] [i_2] [i_4] [i_2] [0ULL] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((arr_2 [i_7] [i_0 + 2]) << (((var_4) - (6705343092295004614LL))))))));
                        }
                    }
                }
                for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) ((signed char) max((min((((/* implicit */unsigned int) (signed char)-8)), (0U))), (((/* implicit */unsigned int) arr_23 [i_0 + 2])))));
                    arr_24 [(short)9] [i_0] [i_8] = ((/* implicit */long long int) var_10);
                }
                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((-729417062314387966LL), (((/* implicit */long long int) arr_4 [i_0] [i_0 + 2] [i_0 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15265)) ? (((/* implicit */long long int) 4294967295U)) : (-729417062314387966LL)))) ? (((/* implicit */unsigned long long int) max((1995877903U), (((/* implicit */unsigned int) (signed char)-4))))) : (var_5)))));
            }
        } 
    } 
    var_24 = (signed char)-103;
}
