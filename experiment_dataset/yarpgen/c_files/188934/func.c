/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188934
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
    var_11 -= ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_3)), (var_8)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned char) max((((max((((/* implicit */long long int) arr_0 [(_Bool)1] [i_0 + 1])), (var_1))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)4095))))))), (((/* implicit */long long int) min((arr_1 [i_0 + 1] [i_0 - 1]), (((/* implicit */short) arr_0 [i_0] [i_0])))))));
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((short)-15406), ((short)15405)))) % (((/* implicit */int) (signed char)63)))) | (((/* implicit */int) (short)-15406))));
        var_14 &= ((/* implicit */unsigned long long int) (short)15405);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_15 = (short)-14675;
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        var_16 += ((/* implicit */short) var_3);
                        arr_13 [i_1 - 1] [i_2] [i_4] = ((/* implicit */long long int) ((unsigned long long int) var_6));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_5])))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) ((signed char) arr_1 [i_2] [i_3 + 1]))) >= (((/* implicit */int) arr_5 [i_2])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((int) arr_16 [i_1 + 1] [i_3 + 1] [i_3])))));
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)15405))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (+(arr_11 [i_1] [i_2] [i_2] [i_3])));
                    arr_20 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (-(((var_4) | (((/* implicit */unsigned long long int) var_2))))));
        arr_21 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
        var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_25 [i_7] [i_7]));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        var_25 -= ((/* implicit */short) (-(((/* implicit */int) (short)-6530))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))))));
                        var_27 = ((/* implicit */short) var_10);
                        var_28 = ((int) ((((/* implicit */int) arr_28 [i_10])) | (((/* implicit */int) (unsigned char)164))));
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_8 - 1]))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) var_5);
        arr_38 [i_8] = ((/* implicit */short) (-(((/* implicit */int) (short)6529))));
    }
    var_31 = ((/* implicit */short) max((6615825181595917260LL), (((/* implicit */long long int) (short)6530))));
}
