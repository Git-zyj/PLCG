/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122656
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((-(arr_0 [i_0]))), (max((arr_0 [i_0 - 1]), (arr_0 [i_0])))))), (((((/* implicit */long long int) arr_0 [i_0 - 1])) / (var_3)))));
        arr_3 [i_0 + 1] = ((/* implicit */long long int) var_14);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)54))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((min((arr_5 [i_2 + 2] [i_2] [i_3 + 1]), (arr_5 [i_2 - 1] [i_2 + 1] [i_3 - 3]))) > (((((/* implicit */_Bool) arr_5 [i_2 + 1] [(signed char)14] [i_3 + 1])) ? (arr_5 [i_2 + 2] [i_3 - 3] [i_3 - 1]) : (arr_5 [i_2 - 1] [(unsigned short)6] [i_3 + 1])))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [11LL] [i_3] [i_4] [i_4] [i_4])) ? (5695490586011377129ULL) : (((/* implicit */unsigned long long int) arr_4 [(unsigned char)13])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_4] [i_2] [i_1] [i_0])), (var_3)))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_0 [i_4]), (((/* implicit */int) arr_6 [i_4] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-29423)) : (arr_11 [i_0 - 1] [i_0] [(unsigned short)2] [(_Bool)1] [i_0] [i_0]))))) / (((/* implicit */int) ((unsigned short) arr_6 [i_4] [i_3 - 1] [i_2 - 1] [i_0])))));
                                var_21 = min((((/* implicit */long long int) ((unsigned char) ((short) var_17)))), (max((var_3), (((/* implicit */long long int) arr_2 [i_1] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (short)29415);
            var_23 = ((/* implicit */unsigned char) min((min((max((516096U), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (signed char)-9)))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_8))))))));
            var_24 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5890240918980852264LL))))));
            var_25 = ((/* implicit */unsigned short) (+(var_3)));
        }
        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) var_14));
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_0 [i_6]) : (((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
        var_28 -= ((/* implicit */long long int) ((signed char) ((unsigned long long int) ((unsigned long long int) var_3))));
    }
    var_29 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_9)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)28796))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10))))) : ((~(((/* implicit */int) var_0))))))));
}
