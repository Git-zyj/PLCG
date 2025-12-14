/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158679
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
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5942)) ? (((unsigned long long int) (~(((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */int) (short)-8121)) > (((/* implicit */int) (unsigned short)15))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_8 [i_0] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0 + 3]) > (((/* implicit */int) var_3)))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) var_1);
            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_6 [i_0]))))));
        }
        /* vectorizable */
        for (short i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_22 [i_0 + 2] [i_4] = ((/* implicit */unsigned long long int) arr_17 [19LL] [i_2] [i_4] [i_2 - 2]);
                            var_14 ^= ((/* implicit */unsigned long long int) ((_Bool) -204080537));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_4] = ((/* implicit */unsigned int) var_12);
                            arr_27 [i_0] [i_0] [i_3] [i_4] [i_6] [i_0] [i_4] = (-(((/* implicit */int) arr_15 [i_3])));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [1U])) | (((/* implicit */int) (unsigned short)56136))));
                            arr_28 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_3 - 2] [i_0 + 4]))));
                            var_16 |= ((/* implicit */long long int) (-(204080537)));
                        }
                        var_17 = ((/* implicit */short) ((int) var_12));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_18 += ((/* implicit */unsigned int) (!(((204080537) > (((/* implicit */int) var_0))))));
                arr_32 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_7] [i_2] [i_0])))));
                arr_33 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
            arr_34 [i_2] = ((_Bool) ((unsigned long long int) arr_6 [2U]));
            arr_35 [i_0] [i_0] = var_9;
        }
    }
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((short) arr_19 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8]));
        arr_38 [i_8] [i_8] = ((/* implicit */signed char) min((arr_0 [i_8] [i_8]), (((/* implicit */int) min((arr_20 [i_8 - 1] [i_8] [12LL] [i_8] [i_8]), (((/* implicit */unsigned short) arr_31 [i_8 + 1] [i_8 + 1] [i_8 - 2])))))));
        var_20 = ((/* implicit */unsigned short) arr_30 [13] [i_8] [i_8] [i_8 - 2]);
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned short) (~(((unsigned long long int) arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                        arr_49 [i_8] [i_9] [i_8 + 1] [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
        arr_50 [i_8] = ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [12ULL])) ? (((/* implicit */int) arr_16 [1U] [i_8] [i_8])) : (((/* implicit */int) var_0))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)3)), (10930403220828353374ULL))))))));
    }
    var_22 = ((/* implicit */long long int) var_3);
}
