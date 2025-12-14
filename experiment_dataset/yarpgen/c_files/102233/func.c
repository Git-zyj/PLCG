/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102233
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    var_16 = ((((/* implicit */int) (!(var_5)))) == ((~(((/* implicit */int) (unsigned char)131)))));
                    arr_10 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(arr_8 [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (8892594392703046332ULL))))))))) : (var_6));
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)119))));
                    arr_12 [i_0] [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_17 += ((/* implicit */short) (+(((/* implicit */int) var_5))));
                            var_18 = (!(((/* implicit */_Bool) (unsigned char)203)));
                            var_19 = ((/* implicit */_Bool) 14912826563774217996ULL);
                            var_20 = ((/* implicit */signed char) ((unsigned short) ((short) (unsigned short)44128)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 ^= ((/* implicit */short) (((-(((((/* implicit */int) (unsigned short)14698)) / (((/* implicit */int) (short)30318)))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)97)) / (((/* implicit */int) (unsigned char)53))))) <= (((11390503169862999147ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                            var_22 = ((_Bool) max((((/* implicit */int) (unsigned short)56564)), (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
                            arr_19 [i_0 - 2] [i_1] [i_2 - 2] [i_3 + 2] [i_5] = ((/* implicit */signed char) var_14);
                        }
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7365171735853048907LL)) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) (unsigned short)31922))))))))));
                        arr_20 [i_0 - 4] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)3191)) - (((/* implicit */int) (unsigned char)197))))));
                        var_24 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)61589)))), (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_2 + 1] [i_1])), ((signed char)2))))));
                        arr_21 [i_0] [i_1 + 2] [i_1] [i_0] [i_3] [i_0] |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) -8526422037981800415LL)) || (((/* implicit */_Bool) var_3))))));
                    }
                }
                var_25 ^= ((/* implicit */short) var_2);
                var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_7 [i_0 - 1]) ? (((/* implicit */int) arr_7 [i_0 - 2])) : (((/* implicit */int) (short)-26366))))), (min((((/* implicit */unsigned long long int) (unsigned short)7055)), ((-(2999163011785213583ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 7; i_8 += 2) 
            {
                {
                    arr_28 [i_6 + 3] [i_8] [i_8 + 2] = (unsigned char)248;
                    arr_29 [i_8] [i_7] = ((unsigned long long int) (signed char)-39);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned char)180))))), (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17797))) : (9554149681006505284ULL)))));
                                var_28 &= ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_38 [i_8 + 2] [i_7] [i_6] = ((/* implicit */long long int) var_2);
                    var_29 -= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    } 
}
