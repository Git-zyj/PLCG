/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154283
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
    var_11 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)52)) : (var_8)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (var_7))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-70376454)))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)63))))) : (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) / (4558725776095902332LL)))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_3] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0]))))))))))));
                                var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) arr_12 [(unsigned char)10] [i_3 + 1] [i_3])))));
                                arr_13 [(unsigned char)4] [(unsigned char)4] [i_0] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) var_5);
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2] [i_5] [i_1 - 2])) | (arr_2 [i_1 + 2] [i_1 + 2]))), (((/* implicit */unsigned long long int) var_2)))))));
                        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14026))))) ? (((/* implicit */int) min((arr_4 [(unsigned char)6]), (arr_4 [(unsigned char)0])))) : ((~(((/* implicit */int) arr_4 [(unsigned char)0]))))));
                        var_17 = ((/* implicit */unsigned int) ((((arr_11 [i_0] [(_Bool)1] [i_1 + 2] [i_1 + 2] [(_Bool)1] [i_5] [i_5]) >= (arr_11 [i_0] [i_1] [i_1 + 1] [i_1 - 3] [i_2] [i_2] [i_2]))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_1 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (2305843009213693951LL)))) || (((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_5] [i_5] [i_2]) ^ (1673870680)))))))));
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_0 [5] [i_1]))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) max(((unsigned char)210), ((unsigned char)128))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) (unsigned short)18895)) ? (((/* implicit */unsigned long long int) 15360LL)) : (1448187343429334205ULL)))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
}
