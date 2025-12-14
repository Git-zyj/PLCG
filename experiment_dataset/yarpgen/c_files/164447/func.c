/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164447
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_4 [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3 - 1])))), (-125030713)));
                                arr_16 [i_3] [i_3] [(_Bool)1] [i_0] [i_0] [i_0] = ((_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_3]) < (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_4])))))) : (arr_2 [i_4])));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_4))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (signed char)-110))))) ? (((((/* implicit */int) var_19)) >> (((((/* implicit */int) var_5)) - (88))))) : (((/* implicit */int) ((unsigned char) (unsigned char)255))))) << ((((~(((((/* implicit */int) var_15)) ^ (((/* implicit */int) (_Bool)0)))))) + (165)))));
                    var_23 ^= var_1;
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)116);
                }
                var_24 = ((((/* implicit */unsigned long long int) (((-(arr_1 [i_0]))) >> (((var_13) - (6487246014820646806ULL)))))) / (((((/* implicit */unsigned long long int) ((var_0) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) -1149922141))))) & ((+(var_1))))));
                var_25 = ((/* implicit */_Bool) (signed char)-110);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_26 = (!(((/* implicit */_Bool) arr_23 [i_6 + 1])));
        var_27 |= ((/* implicit */long long int) ((arr_22 [i_6 + 1]) + (((/* implicit */int) (unsigned char)238))));
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) -1403280987)) != (769661332U)))) >> (((((/* implicit */int) ((unsigned char) arr_19 [i_7]))) - (230)))));
        var_29 = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_30 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8])) & (((/* implicit */int) arr_26 [i_8])))))));
        var_31 = ((/* implicit */short) min((((int) var_9)), (((/* implicit */int) arr_26 [i_8]))));
        var_32 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 6187938499097842929ULL)))));
        var_33 = ((/* implicit */unsigned long long int) 1545532109);
    }
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1403280987)) || (((/* implicit */_Bool) (signed char)-110))))) : (((/* implicit */int) (unsigned char)160))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33285)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (266427071U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((var_5), (var_12))))))));
    var_36 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_10)));
}
