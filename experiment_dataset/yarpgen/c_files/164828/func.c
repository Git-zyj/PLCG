/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164828
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4194303LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (-6741280702855068521LL))) + (((((/* implicit */_Bool) arr_3 [i_1])) ? (17454747090944LL) : (((/* implicit */long long int) 4294967295U))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-31961)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)149)) - (127)))))), (4294967282U))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (signed char)-3))))) : (4292675206U)))) ? (813597403U) : (arr_2 [i_0])));
                var_19 -= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [i_1 + 1]))))), ((short)14629)))) | (((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (arr_8 [i_2] [i_1] [i_0 + 2]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-14623)), ((unsigned short)34214)))) : (((((/* implicit */int) (short)-6284)) & (((/* implicit */int) (_Bool)1)))))))));
                            var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -1)) ? (1496939353U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                            arr_12 [i_0] [i_1] [i_2] [22U] [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_3] [(signed char)10] [i_0])) >> (((((/* implicit */int) arr_1 [i_3])) - (31144)))))) + (max((arr_10 [i_3]), (((/* implicit */long long int) (_Bool)1)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [19LL] [i_0 + 2]))))) > (max((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_3] [i_3] [i_1])), (arr_2 [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) ^ (min((var_3), (((/* implicit */long long int) (short)-20940))))))) ? (((((/* implicit */_Bool) ((2798027942U) ^ (var_2)))) ? (min((var_15), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)32), (var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1496939342U)) ? (((/* implicit */long long int) var_11)) : (-6713131968417644094LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-27622)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)125)) : (-2147483639))))))));
}
