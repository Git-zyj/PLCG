/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130545
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (short)5482)) ? (((/* implicit */int) min(((signed char)1), ((signed char)-23)))) : (1048575))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)61519))));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4 - 1] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 4]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57769)) + (((/* implicit */int) (signed char)-74)))))));
                }
                for (signed char i_5 = 4; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_1] = ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | ((+(((/* implicit */int) (signed char)-115)))))) <= (((/* implicit */int) (unsigned short)9)));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (8544013558676898842LL)))) || (((/* implicit */_Bool) max((arr_7 [6] [i_1] [i_5 - 2]), (arr_7 [i_5] [i_1] [i_5 + 1]))))));
                        arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)74)) + (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)92)), (arr_17 [i_1] [(_Bool)1] [(_Bool)1]))))))));
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [(short)21]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (~((~((-2147483647 - 1))))));
                        var_19 = max((32767LL), (6529619727903585687LL));
                        arr_26 [(signed char)13] [i_1 + 1] [i_5 - 4] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        var_20 &= ((/* implicit */unsigned char) var_0);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_30 [i_0] [0LL] [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (17667173153728352582ULL)));
                        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)32)) + (((/* implicit */int) var_0)))) >> (((((/* implicit */int) (unsigned short)65522)) - (65513)))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1639661841)))))))), (arr_10 [i_0])));
                        var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 139637976727552LL))));
                        var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        var_25 -= ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : ((~(((((/* implicit */int) (unsigned short)15360)) ^ (-828838653)))))));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_27 = (-(arr_31 [(signed char)10]));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_29 [i_0 + 2] [i_1 - 1] [(_Bool)1] [(unsigned short)5] [i_1 + 1] [i_10])) : (((/* implicit */int) var_3))));
                    var_29 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)54620))))));
                }
                for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_30 &= ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-27)) & (((/* implicit */int) (unsigned char)104)))) != (min((828838656), (((/* implicit */int) (short)-16596)))))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [(unsigned short)11])) : (((/* implicit */int) min(((short)-24361), (((/* implicit */short) (unsigned char)145)))))));
                    var_31 |= ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_0]) ^ (((((/* implicit */int) (unsigned char)123)) * (((/* implicit */int) (unsigned char)150))))));
                    arr_38 [i_1] [i_1] [i_11] = ((/* implicit */int) min((6529619727903585687LL), (((/* implicit */long long int) (unsigned short)30442))));
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_32 = var_5;
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1219725964819994079LL) | (((/* implicit */long long int) 1595536781))))) ? (((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (3308669203039998934ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)0] [(unsigned short)0])))))) ? ((-(((/* implicit */int) (signed char)-63)))) : (((((/* implicit */_Bool) -828838661)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_28 [14] [i_1] [i_12] [14])))))))));
                            arr_43 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */unsigned char) var_11);
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (_Bool)1)))))) / (var_5))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) var_5);
}
