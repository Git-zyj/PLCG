/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126112
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
    var_17 = ((/* implicit */_Bool) (unsigned char)151);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)51677)) | (((/* implicit */int) arr_1 [(unsigned char)0])))) >> (((((/* implicit */int) arr_1 [(_Bool)1])) >> (((((/* implicit */int) arr_0 [(unsigned char)6] [(unsigned char)6])) - (76)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) arr_4 [i_3] [i_2]))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1])) * (((((/* implicit */int) arr_4 [i_1] [i_2])) * (((/* implicit */int) (unsigned char)151))))))) ? (((((((/* implicit */int) arr_4 [i_2 + 1] [(unsigned short)7])) <= (((/* implicit */int) (unsigned char)2)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) == (((/* implicit */int) (unsigned char)89))))) : (((((/* implicit */int) (unsigned char)151)) * (((/* implicit */int) arr_7 [i_1] [i_2])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)169)) || (((/* implicit */_Bool) (unsigned char)151)))) && (arr_4 [(_Bool)1] [i_2]))))));
                    var_20 = ((/* implicit */_Bool) (unsigned short)14333);
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
    }
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) arr_13 [i_4]);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)121)) + (((/* implicit */int) (unsigned char)122))));
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    }
}
