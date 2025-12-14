/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148221
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4129752460U)) : (arr_1 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7ULL] [i_1]))) : (25ULL)))));
                    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1886868961)) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3184605724269078441LL)))))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) arr_4 [0] [i_1] [i_0] [i_2]);
                        arr_9 [i_3] [i_3] [i_1] [i_1] [i_0] &= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_0])) ? (arr_3 [i_0] [7U] [i_3]) : (((/* implicit */int) (unsigned short)16376))))) ? (((long long int) 2606712818402478602LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4122574704694368151LL)) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_2])))))));
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_1 [6ULL] [i_2])))) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))) : (min((2147483647), (((/* implicit */int) arr_7 [i_0] [i_1]))))));
                    }
                    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) ((signed char) arr_2 [i_1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    var_20 &= ((int) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_17 [i_5] [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) (short)24576))));
                    var_21 = ((/* implicit */int) (unsigned short)27052);
                    arr_21 [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (signed char)60)) : (arr_14 [i_4])))) ? (((((/* implicit */_Bool) 785380671359095962ULL)) ? (arr_18 [i_4] [i_5] [i_6]) : (((/* implicit */unsigned long long int) 3925480235U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24576)))))) ? (((((/* implicit */_Bool) 1411635044)) ? (min((17661363402350455662ULL), (((/* implicit */unsigned long long int) (short)9418)))) : (((/* implicit */unsigned long long int) 4129752445U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_22 = arr_19 [(unsigned char)8] [i_4];
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_23 = ((/* implicit */long long int) arr_16 [i_4] [i_4] [i_7]);
            var_24 = ((/* implicit */unsigned char) 3611350741U);
            arr_24 [(unsigned short)11] [i_4] [i_4] = ((/* implicit */_Bool) ((long long int) -3184605724269078447LL));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) arr_25 [i_8] [i_8]);
        var_26 = ((/* implicit */_Bool) 7805659270020359465LL);
        arr_27 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8] [i_8]))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (short)-24593))) ? (((/* implicit */int) (short)-24576)) : (((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [i_8]))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    arr_34 [i_9] [i_10] [i_9] = ((/* implicit */int) ((_Bool) arr_7 [i_10 - 1] [i_9 - 1]));
                    var_28 = ((/* implicit */_Bool) min((arr_1 [i_9 - 1] [i_10 - 1]), (arr_1 [i_9 - 1] [i_10 - 1])));
                    arr_35 [i_9] [i_9] = (-(((((/* implicit */_Bool) arr_7 [i_9 - 1] [i_10 - 1])) ? ((+(arr_29 [i_11]))) : (((/* implicit */int) (unsigned short)24)))));
                    var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_30 [i_10 - 1])) ? (14196295053355452889ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10 - 1]))))), (((unsigned long long int) arr_30 [i_10 - 1]))));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) 165214835U);
        arr_36 [i_9] [i_9] = ((/* implicit */signed char) (unsigned short)3072);
        var_31 = ((/* implicit */unsigned long long int) max((arr_3 [i_9 - 1] [i_9] [i_9 - 1]), (max((((/* implicit */int) (signed char)32)), (-200730521)))));
    }
    var_32 = ((/* implicit */unsigned short) var_6);
    var_33 = var_6;
    var_34 = ((/* implicit */unsigned char) (!(var_3)));
}
