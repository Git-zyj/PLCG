/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132896
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) (+(var_2)));
        arr_2 [i_0] = ((/* implicit */signed char) ((var_10) | (((/* implicit */long long int) 1524192610))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) ((((unsigned long long int) arr_1 [i_1] [i_0])) & (((/* implicit */unsigned long long int) ((var_5) >> (((arr_1 [i_0] [i_0]) - (457493899362485478ULL))))))));
            var_13 = ((/* implicit */unsigned short) ((signed char) (signed char)38));
        }
        for (short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_14 -= ((/* implicit */_Bool) ((long long int) ((max((var_5), (var_10))) >> (((/* implicit */int) var_3)))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                var_15 = ((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max(((unsigned short)8039), (((/* implicit */unsigned short) arr_4 [i_3] [i_3] [i_3 - 1]))))))));
                arr_10 [i_0] [i_0] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) var_4))), (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_6 [i_3])))) - (((unsigned long long int) var_3))))));
                var_16 &= ((/* implicit */unsigned long long int) var_10);
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) (unsigned char)91)), (arr_8 [(unsigned char)2] [(unsigned char)2] [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_3 + 1] [i_3])) ? (((/* implicit */long long int) arr_6 [i_0])) : (var_10)))) ? (var_4) : (4475245014854300306LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_13 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)0))))))), (((/* implicit */long long int) ((unsigned short) max(((short)31190), (((/* implicit */short) (_Bool)1))))))));
                    var_18 = ((/* implicit */unsigned int) arr_11 [i_0] [i_2 - 3] [i_3] [i_2 - 3]);
                    arr_14 [i_0] [i_0] [6LL] [i_2] [i_0] |= ((/* implicit */_Bool) var_4);
                    arr_15 [i_0] [i_4] [i_3 + 1] = ((/* implicit */unsigned char) var_8);
                    var_19 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 7414608965305456170LL)) > (var_2)))))) | (((/* implicit */int) ((unsigned short) ((short) arr_0 [i_0]))))));
                }
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_20 = ((/* implicit */_Bool) 13486289605286525994ULL);
                var_21 = ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) / (var_10))) | (((/* implicit */long long int) ((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned int) ((-7347146347931498777LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-12616)))));
                            var_23 += ((/* implicit */unsigned char) var_8);
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_22 [i_0] [i_2] [i_6] [i_6]))) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55085))))) ? (((((/* implicit */int) (short)0)) - (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)8264)))))), (((/* implicit */int) arr_4 [i_0] [i_2] [i_6]))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])) > (((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 2])) || (((/* implicit */_Bool) var_5)))))));
            var_27 = ((/* implicit */signed char) 18446744073709551592ULL);
            arr_25 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
        }
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) (unsigned short)3);
        var_29 = ((/* implicit */long long int) min(((signed char)-8), ((signed char)44)));
        var_30 -= ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)127)))))));
        var_31 &= ((/* implicit */unsigned char) ((long long int) ((signed char) ((arr_22 [i_8 - 1] [i_8 - 1] [i_8] [i_8]) << (((((((/* implicit */int) arr_9 [i_8] [i_8 - 1] [6U] [i_8])) + (51))) - (11)))))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_5);
}
