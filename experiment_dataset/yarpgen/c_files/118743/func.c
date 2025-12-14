/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118743
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
    var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (min((var_3), (((/* implicit */long long int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) 14683803290345944915ULL);
            var_12 += ((/* implicit */unsigned int) ((arr_1 [i_1 - 2] [i_1 + 3]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29903))) ^ (14683803290345944927ULL))) : (((/* implicit */unsigned long long int) ((3576275264443424135LL) / (((/* implicit */long long int) 7U)))))));
            var_13 = ((/* implicit */int) (~(arr_5 [i_1 - 2] [i_1 + 3])));
            var_14 = ((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1 + 2]);
        }
        var_15 = arr_5 [i_0] [i_0];
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(var_4)))), (((((/* implicit */_Bool) -5955529176174759892LL)) ? (1426479695U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4088)))))))) ? (max((((/* implicit */long long int) ((unsigned short) 21U))), ((+(arr_0 [17] [i_2]))))) : (((/* implicit */long long int) ((int) (unsigned short)3654)))));
        var_17 -= ((/* implicit */_Bool) ((arr_3 [i_2] [i_2] [i_2]) ? (((/* implicit */int) min((arr_3 [i_2] [i_2] [i_2]), (arr_3 [i_2] [i_2] [(unsigned short)2])))) : (((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */int) arr_3 [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) (unsigned char)255))))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_4 [4LL]);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((signed char) 920641633U));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) -1148020664632531412LL)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (14683803290345944915ULL)));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_4] [i_3] [16LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (arr_5 [i_3 - 2] [i_3])))) ? (((((/* implicit */long long int) var_8)) % (arr_5 [i_3] [i_4]))) : (((/* implicit */long long int) ((arr_8 [i_4]) - (((/* implicit */unsigned int) 1)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_5] = ((((/* implicit */_Bool) arr_0 [i_3] [i_5])) ? (arr_0 [i_3 - 1] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5]))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) arr_22 [i_3] [i_3 + 2] [i_6] [i_5])) ? (arr_22 [i_3] [i_3 - 1] [i_6] [i_7]) : (arr_22 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2]));
                        var_23 = ((((((/* implicit */int) (unsigned char)31)) - (((/* implicit */int) arr_19 [i_3] [i_3] [5U])))) - ((~(arr_18 [i_3] [i_3] [i_3]))));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_6))) + (min((max((((/* implicit */int) (signed char)102)), (var_4))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)0)))))))));
}
