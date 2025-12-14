/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136848
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
    var_14 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_0), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_2 [i_0] [i_0] [i_1]))) < (((unsigned long long int) -1593405274)))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) 1593405273))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) var_4);
                            var_17 ^= ((/* implicit */unsigned char) var_3);
                            var_18 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (arr_7 [i_1 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [0U] [i_0] [i_5]))) < (arr_1 [i_0])))) < (((/* implicit */int) var_7))))), (arr_11 [i_1 + 3] [i_1] [i_1] [i_1 - 2])));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((249218668), (-989803544))) < (((/* implicit */int) ((arr_10 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149)))))))))));
                                arr_17 [i_0] [i_1] [i_4] [i_0] [i_1] [i_6] [(_Bool)1] = ((/* implicit */_Bool) arr_3 [i_0]);
                                var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [i_0]))))), (max(((~(((/* implicit */int) var_3)))), ((~(((/* implicit */int) (unsigned char)128))))))));
                                var_22 = ((/* implicit */unsigned int) ((unsigned char) (((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_4] [i_5] [i_4])))) < (max((((/* implicit */int) var_1)), (249218668))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((402653184U) < (((/* implicit */unsigned int) (~(573775340))))))) < (((/* implicit */int) ((-249218694) < ((+(((/* implicit */int) (unsigned char)162)))))))));
}
