/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112923
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) == (((/* implicit */int) ((((var_18) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [13U] [i_0 - 3])))) == ((~(arr_1 [16]))))))));
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3])) > (((/* implicit */int) var_7)))))) & ((~(var_11))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (29944938U)))) ? ((+(((/* implicit */int) arr_0 [i_0] [(unsigned char)7])))) : (((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_6 [i_0 + 3] [i_0] [i_1 + 1] [i_1 - 1]))) > (((arr_4 [i_2] [i_2] [i_2]) & (arr_4 [i_0 + 3] [i_1 + 2] [i_2])))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_0 [i_0 - 4] [i_0 - 4]))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_7))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 4])) ? (((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 3])) % (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) 3026913116U)))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) var_17);
        arr_10 [13LL] [i_3 + 1] &= ((/* implicit */int) arr_4 [i_3 - 1] [i_3 + 1] [i_3 + 2]);
    }
    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
    {
        arr_13 [i_4] = ((int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (~(arr_12 [i_4] [i_4]))))));
        arr_14 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-26))))))));
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_5))));
    var_27 = ((/* implicit */short) var_2);
}
