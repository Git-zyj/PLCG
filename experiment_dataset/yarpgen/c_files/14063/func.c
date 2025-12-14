/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14063
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) arr_1 [i_0])) <= (var_5)))), (arr_5 [i_0])));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 + 4] [i_1 - 1] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 4] [i_2] [(signed char)10] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) min(((signed char)-63), (arr_7 [i_1 + 2] [i_1 + 1] [i_3] [i_3] [5LL])))))))));
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */long long int) var_12);
                arr_10 [i_0] [i_1 + 4] [15] = ((/* implicit */_Bool) var_4);
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (signed char)-32)), (4690300098696590464LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_0 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1] [i_1 + 3])))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22227)) * ((+(((/* implicit */int) var_8))))))) ? (-3504482455125862267LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (short)-22255)) : (((/* implicit */int) (short)22224)))) : (7)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8561707529015331069LL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)22224))))) ? (((/* implicit */int) ((unsigned char) (-(var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) max(((unsigned short)17), (((/* implicit */unsigned short) (unsigned char)241)))))))))))));
    var_17 &= ((/* implicit */unsigned long long int) var_5);
}
