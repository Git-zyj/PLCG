/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15507
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) var_6);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)226))))) : (((var_1) << (((((/* implicit */int) max(((unsigned char)0), (var_2)))) - (178)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (max((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (short)15997)))), (((/* implicit */int) (unsigned short)65530))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_23 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_1 - 1] [(signed char)2] [i_3] [i_1])))), (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_3] [i_2])) : (((/* implicit */int) (unsigned short)65515))))));
                        var_24 = ((/* implicit */int) var_8);
                    }
                    arr_10 [i_0] [i_0] [10LL] = (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2])) >= (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */int) max((arr_0 [i_0]), ((short)-15884)))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (arr_1 [i_0])))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (var_10))))) : (((((/* implicit */_Bool) (short)7604)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1]))) : (var_8)))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((unsigned char) ((unsigned int) (+(((/* implicit */int) arr_7 [6ULL] [(_Bool)1] [6ULL]))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)65509)))), (((((/* implicit */int) arr_4 [i_4] [(short)15] [i_4])) / (((/* implicit */int) var_11)))))), (max((((/* implicit */int) arr_0 [4])), (((((((/* implicit */int) arr_2 [i_4])) + (2147483647))) << (((((/* implicit */int) arr_5 [i_4])) - (223))))))))))));
        arr_13 [i_4] = ((/* implicit */unsigned char) arr_6 [i_4] [i_4] [(short)14] [(unsigned char)4]);
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4] [11U] [i_4] [i_4])) ? (((/* implicit */int) ((unsigned short) ((arr_1 [(_Bool)1]) & (((/* implicit */int) (unsigned short)43763)))))) : (((/* implicit */int) (signed char)-112)))))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (short)-10582)), (4167353644U))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1]))))) || (((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_30 = ((/* implicit */long long int) ((min((((/* implicit */int) max(((signed char)-119), ((signed char)119)))), (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)45)))))) << (((((/* implicit */int) max((max((arr_9 [i_5] [i_5]), (((/* implicit */unsigned char) var_3)))), (((/* implicit */unsigned char) var_7))))) - (63)))));
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_5] [i_5])) > (((/* implicit */int) arr_3 [i_5] [i_5]))))) | (((((/* implicit */int) arr_3 [i_5] [i_5])) | (((/* implicit */int) arr_3 [i_5] [i_5])))))))));
    }
}
