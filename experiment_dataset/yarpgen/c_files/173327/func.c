/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173327
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
    var_18 &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((var_14) / (((/* implicit */int) var_2))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)26989), ((unsigned short)31744))))))));
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_15))))), (-882995232))) < (max((((/* implicit */int) (unsigned short)18114)), (63)))));
        arr_4 [i_0] = ((/* implicit */int) ((long long int) max((((((/* implicit */_Bool) -7546667025055721230LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (13LL))), (var_17))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */int) (unsigned short)38216)) : (((/* implicit */int) (unsigned short)36154))));
        arr_9 [i_1] = arr_7 [4LL] [i_1];
        arr_10 [(unsigned short)12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 882995231)) ? (((((/* implicit */int) var_16)) | (((/* implicit */int) var_16)))) : ((+(var_13)))));
    }
    for (int i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        arr_13 [i_2] = (unsigned short)13302;
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 3; i_4 < 24; i_4 += 4) 
            {
                arr_19 [i_2] [i_2] [i_2] [8] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((-882995232), (((/* implicit */int) (unsigned short)48197))))) : (-1LL))) << (((1885640770632949197LL) - (1885640770632949152LL)))));
                arr_20 [i_2 - 1] = ((/* implicit */int) var_2);
                arr_21 [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11055)) & (((/* implicit */int) arr_16 [i_2 - 2] [i_3])))))));
                arr_22 [i_2] [11LL] [i_2] [i_2] = arr_18 [(unsigned short)24] [5] [8];
                arr_23 [(unsigned short)22] [i_3] [i_2 - 1] [i_4] = var_0;
            }
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_3] [i_3] [i_2]))));
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 3; i_6 < 24; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            arr_36 [i_2] [i_5] [i_7] [i_8] [i_8] [11] [(unsigned short)15] = min((var_10), (min(((unsigned short)4281), (arr_16 [i_6] [i_6 - 3]))));
                            arr_37 [i_2] [i_5] [18LL] [i_6] [i_7] [18LL] [i_7] = arr_34 [i_2] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_7 + 1] [i_8];
                            arr_38 [24] [i_8] [i_7 + 1] [18LL] [i_8] [i_2] &= ((int) var_5);
                        }
                    } 
                } 
            } 
            arr_39 [i_2] = ((/* implicit */int) ((1450710334503702054LL) / (6376196067243643735LL)));
        }
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_43 [i_9] [9LL] = max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11055))) / (min((-5535681677009037995LL), (((/* implicit */long long int) arr_16 [i_2] [i_9])))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((((/* implicit */int) arr_41 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15])) / (((/* implicit */int) var_11))))))));
            arr_44 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)17338))))) ? (((((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1])) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 1] [i_2 - 2]))));
            arr_45 [i_9] [(unsigned short)15] [(unsigned short)17] = (+(9223372036854775807LL));
        }
    }
}
