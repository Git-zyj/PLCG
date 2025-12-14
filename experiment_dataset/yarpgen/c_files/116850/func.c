/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116850
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_8))));
        arr_2 [4U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (70368743653376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) (unsigned short)18013)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18013))) : (7712817111467680085ULL)))));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)61005)))))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -7841416208147118438LL)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_0))));
                var_14 = ((/* implicit */unsigned int) arr_8 [17ULL]);
            }
            arr_12 [i_1] = (unsigned short)16829;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))) - (((/* implicit */int) (unsigned short)23132))));
                        arr_17 [i_5] [i_4] [i_2] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((unsigned char) 1920406726U)))));
                        var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) (-(var_6)));
            arr_20 [i_6] = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) min(((unsigned short)23132), (((/* implicit */unsigned short) (short)4671))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (70368743653376ULL))))));
            arr_21 [i_6] [i_6] [(unsigned char)3] = ((/* implicit */unsigned short) arr_7 [13] [i_1 - 2] [i_1]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)4530)))))))) || (((/* implicit */_Bool) var_4))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -919122815)) ? (7841416208147118437LL) : (((/* implicit */long long int) -90647503))));
                            arr_31 [i_1] [i_6] [i_6] [i_7] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) var_8);
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-21809))));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned short)42375)) : (((int) (unsigned short)61011))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_42 [i_1 - 2] [(unsigned short)2] [i_1 - 2] [i_10] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                            arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (signed char)82)))));
                            arr_44 [i_11] |= ((/* implicit */int) arr_36 [i_1] [i_1] [(_Bool)1]);
                            arr_45 [i_10] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34397))) > (arr_36 [i_13 - 1] [i_13 - 1] [i_1 - 3])));
                            var_22 = ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -7841416208147118438LL))))) - (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [(signed char)8] [(signed char)8] [i_1 - 3]))));
            var_24 = ((/* implicit */unsigned short) (~(((int) (short)-28454))));
        }
        arr_46 [i_1 - 3] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (arr_36 [i_1] [i_1] [6U]) : (((/* implicit */long long int) arr_4 [i_1]))))));
        arr_47 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) 11441479558215402164ULL)) ? (arr_35 [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)0))))) ? (((138604505U) >> (((var_6) - (8880763583076598837LL))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
        arr_48 [i_1] [(short)15] = ((/* implicit */short) max(((+(((var_2) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47515))))))), (((/* implicit */long long int) ((int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
    }
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            {
                arr_53 [i_15] [13U] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) / (3483257279U)))))));
                var_25 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (arr_30 [i_14] [i_15] [i_15] [i_15] [i_15]))) ? (arr_36 [i_14] [i_14] [i_14]) : (((((/* implicit */_Bool) arr_36 [i_14] [i_14] [i_14])) ? (arr_36 [i_15] [(signed char)16] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18013)))))));
            }
        } 
    } 
}
