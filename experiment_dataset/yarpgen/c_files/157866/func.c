/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157866
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
    var_14 -= ((short) (signed char)34);
    var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-2583))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (11361453074449959712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))) & (((/* implicit */int) (unsigned short)13582))));
                                var_17 -= ((/* implicit */short) arr_1 [i_0] [i_1]);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32756)) % (((/* implicit */int) (unsigned char)69))))), (((unsigned int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */long long int) ((unsigned long long int) ((((arr_2 [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4])))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_19 [i_1] = ((/* implicit */unsigned short) var_0);
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_11 [i_2] [i_1] [i_2] [i_5] [i_5]), (arr_11 [i_0] [i_1] [i_2] [i_5] [i_6])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 536870912U)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((int) max((arr_4 [i_6] [i_5] [i_2] [i_1]), ((unsigned short)0))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (short)127);
                    arr_21 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)5593))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (31ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_24 [i_7] = ((/* implicit */long long int) arr_23 [i_7]);
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_27 [i_8] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)127));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_36 [i_11] [i_10] [i_9] [i_9] [i_8] [i_11] = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))) <= ((-9223372036854775807LL - 1LL)))));
                            var_23 += ((/* implicit */unsigned long long int) var_3);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)17640))));
                        }
                    } 
                } 
            } 
            arr_37 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_28 [i_7])))) & ((-(((/* implicit */int) var_10)))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            arr_40 [i_7] [i_7] [i_12] = (unsigned char)86;
            arr_41 [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) -1698200467)) : (18446744073709551611ULL)))));
        }
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_25 &= ((/* implicit */unsigned int) ((var_3) ? (((min(((_Bool)0), (arr_38 [i_13] [i_13]))) ? (arr_33 [i_13] [i_13]) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13] [i_13])))));
        arr_44 [i_13] [i_13] = ((/* implicit */unsigned short) arr_6 [i_13] [i_13] [i_13] [i_13]);
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((((((/* implicit */int) (short)-14666)) / (((/* implicit */int) (short)-27765)))) * (((/* implicit */int) min((var_6), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) arr_34 [i_13] [(_Bool)1] [i_13] [i_13])))))));
        arr_45 [i_13] [i_13] = var_9;
    }
}
