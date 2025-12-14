/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146135
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 3] [i_0 - 2] [i_1])) < (((/* implicit */int) arr_1 [i_1]))))))) && ((_Bool)1)));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (_Bool)1);
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7705))) : (4009968972U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)27544), (((/* implicit */unsigned short) (_Bool)0))))))))) ? (((((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_2 - 1] [i_3 + 1] [i_4])) & (((/* implicit */int) arr_14 [i_0 - 2] [i_1] [i_2 - 1] [i_3 + 1] [i_4 - 2])))) : (((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)196)) ? (1827417697) : (((/* implicit */int) (signed char)123)))) < (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [(unsigned char)9] [i_1] [i_1])) ? (((/* implicit */int) (short)-9648)) : (((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -3217890551666625845LL)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            {
                arr_22 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49406)) != (((/* implicit */int) (unsigned short)0))));
                arr_23 [i_5] [i_5] [i_6 - 1] = ((/* implicit */long long int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)93)) & (((((/* implicit */int) arr_4 [i_6 + 2] [i_6 - 1] [i_6 - 1])) & (((/* implicit */int) arr_4 [i_6 + 2] [i_6 - 1] [i_6 - 1]))))));
                            var_19 -= (unsigned short)56405;
                            /* LoopSeq 1 */
                            for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                            {
                                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_6] [i_7 + 1] [i_8] [(unsigned short)12])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-9648)) & (((/* implicit */int) arr_9 [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)17851)) ? (((/* implicit */int) arr_18 [(signed char)9])) : (((/* implicit */int) arr_9 [i_7 + 1])))))) : (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3696))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_7])) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-9648)), (arr_31 [i_5])))) & (((((/* implicit */int) (unsigned short)12480)) * (((/* implicit */int) (unsigned short)2047)))))) : (((((/* implicit */int) arr_30 [i_5] [i_8] [i_7])) - (((/* implicit */int) arr_25 [i_5] [7] [i_5]))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)32253)) & (((/* implicit */int) (signed char)116)))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24576)) || (((/* implicit */_Bool) arr_29 [i_6 + 2] [i_6 + 2] [i_7] [i_8] [i_9] [i_7 + 1]))))))))));
                                arr_35 [i_5] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5])) ? (max((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)168))))), (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (unsigned char)196)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52236)) < (((/* implicit */int) arr_3 [i_6 + 1] [i_7 - 1])))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((arr_7 [i_5]) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned short)31500)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)89)), ((short)-5112)))))) : (((/* implicit */int) arr_21 [i_5] [i_6 - 3] [i_6 - 3])))))));
                arr_36 [i_5] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (unsigned short)65535)) - (65509)))))))) ? (((/* implicit */int) (signed char)46)) : (((((/* implicit */int) ((((/* implicit */int) (unsigned char)170)) != (((/* implicit */int) (short)9647))))) & ((+(((/* implicit */int) (short)-5112))))))));
            }
        } 
    } 
}
