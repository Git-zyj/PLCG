/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151963
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
    var_14 &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))) + (((/* implicit */unsigned long long int) var_12)));
    var_15 += ((/* implicit */int) ((unsigned short) ((var_0) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_8);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((signed char) ((_Bool) var_8)));
        var_18 -= var_2;
        var_19 = ((/* implicit */int) max((var_19), ((-(((/* implicit */int) (signed char)124))))));
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)8]))) | (var_6));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_10 [i_2 - 3] [i_1 - 4] = ((/* implicit */signed char) ((int) ((_Bool) arr_9 [i_1 + 1] [i_2 + 1])));
            var_21 -= ((/* implicit */unsigned char) ((((unsigned int) (-9223372036854775807LL - 1LL))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_2 - 2] [i_2 - 3] [i_1 + 1]))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                arr_13 [(unsigned short)7] [i_3] [i_3] = ((/* implicit */int) ((((long long int) (-(-3761242799682403543LL)))) / (((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) arr_9 [i_1] [i_2 - 1]))))) ? (((/* implicit */long long int) ((int) var_9))) : (((var_6) / (((/* implicit */long long int) arr_11 [i_1] [i_3]))))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((short) (-(((var_12) + (((/* implicit */long long int) arr_6 [i_1 - 1] [(unsigned short)0])))))));
                    var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 1567581725U))) || (((/* implicit */_Bool) 2727385572U))));
                    arr_18 [i_4] [i_3] [(signed char)4] = ((/* implicit */int) var_5);
                    var_24 = ((var_11) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_1 - 2])))));
                    var_25 += ((/* implicit */_Bool) (+(min((((/* implicit */long long int) 710608109)), (35184372023296LL)))));
                }
            }
            arr_19 [i_1] [i_2] = ((/* implicit */signed char) var_2);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_14 [i_1 - 3] [i_2 - 3] [i_1 - 3] [(unsigned char)8]))) ? (((int) (!(((/* implicit */_Bool) arr_16 [i_2] [(unsigned short)4] [i_1] [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3] [i_1])))))));
        }
        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) (+(var_7)));
            arr_23 [i_1 - 2] [i_5 + 2] [i_5] = ((/* implicit */unsigned short) (+(min((arr_11 [i_5] [i_5]), (arr_11 [i_5] [i_5])))));
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (var_2)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (arr_4 [i_1 - 3])))) : (((var_13) ? (arr_7 [i_1 - 1] [8LL] [i_1]) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (var_8)))) : (((/* implicit */int) var_9))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_8))))));
}
