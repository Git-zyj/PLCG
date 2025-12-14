/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149333
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_3 [i_0] [2ULL])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [9U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((short)19259), (((/* implicit */short) (unsigned char)146))))), ((-(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)60))))))));
                                arr_15 [i_1] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(signed char)3]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -24)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [1]))))) != (((/* implicit */int) var_8))))), ((unsigned short)26825)));
                var_20 |= min((((unsigned int) (-(-24)))), (((/* implicit */unsigned int) -24)));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 = arr_6 [i_6] [i_5] [i_1] [5ULL];
                            var_22 &= ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) (+(var_16)))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_15)))), (24)))) != (var_16)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */int) arr_23 [i_7] [(signed char)3]);
        arr_25 [(_Bool)1] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)35078)), (-53)));
        arr_26 [i_7] = (!(((/* implicit */_Bool) (short)-11248)));
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
        {
            for (unsigned short i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_31 [i_9 + 1] [i_8] [i_9 + 1] = ((/* implicit */short) (_Bool)1);
                    arr_32 [5] [i_9 + 1] = ((/* implicit */unsigned int) var_5);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((min((7466812962847186660ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_1)))))), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))))));
                }
            } 
        } 
        arr_33 [5] [i_7] &= ((/* implicit */unsigned long long int) ((max((1797270391U), (((/* implicit */unsigned int) (unsigned short)25380)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_28 [i_7] [i_7])))))))));
    }
    for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((-(1333965180481694381LL))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65535))))))))));
        var_27 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)16383)) > (((/* implicit */int) (unsigned short)25387)))))));
        arr_36 [i_10] [i_10 - 2] = ((/* implicit */_Bool) arr_34 [(unsigned short)10] [(unsigned short)10]);
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_10))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_29 -= ((/* implicit */signed char) 3885787080U);
        arr_40 [0ULL] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned char)218)))));
        arr_41 [i_11] = ((/* implicit */unsigned short) 255);
    }
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-5636)) || (((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12]))))), (-797277161)));
        arr_45 [i_12] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) (unsigned char)37)), ((+(2082151643570159126LL))))));
    }
}
