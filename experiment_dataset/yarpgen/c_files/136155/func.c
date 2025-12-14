/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136155
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 13825036106204418196ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (3460382729717932358LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned long long int) (unsigned char)63);
                        var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_0]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (-(((((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [(unsigned char)0])) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -732985027)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (-732985051)))) : (((3460382729717932342LL) & (((/* implicit */long long int) -732985051)))))))))));
    }
    var_14 += ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_7), ((unsigned short)55337)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21312))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (var_4)))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)30385)) || (((/* implicit */_Bool) 4141710075U)))))) != (min((498378584U), (((/* implicit */unsigned int) (unsigned short)10181)))))))));
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_22 [(short)5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 18446744073709551613ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7606))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55021))) - (arr_18 [i_4] [i_4] [i_4])))))) ? (max((((unsigned long long int) arr_18 [i_6] [i_4] [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15428))) + (7729184490828309125ULL))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) - (arr_20 [i_6])))) | ((-(16390257334107651235ULL)))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((unsigned char) 1027254365U));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((-732985062) - (((/* implicit */int) (unsigned short)55331)))))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10205)) + (((/* implicit */int) arr_19 [i_7]))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4]))) : (arr_20 [i_5])))))));
                        var_18 &= ((/* implicit */_Bool) (signed char)127);
                        var_19 = ((/* implicit */unsigned char) (-(((max((arr_18 [4ULL] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_16 [i_4])))) & (arr_18 [(unsigned char)2] [i_5] [(unsigned char)8])))));
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) ((_Bool) (~(13825036106204418194ULL))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_8] [i_6] [i_5] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)29784)))))));
                        var_23 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_5] [i_6] [i_9] [i_9]))) : (arr_20 [(short)10]))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65506))) : (0U)))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_36 [i_6] [7ULL] [i_6] [i_5] [(unsigned short)3] &= ((/* implicit */int) 3460382729717932358LL);
                                arr_37 [i_4] [i_5] [i_6] [i_11] [i_11] [(_Bool)1] [14ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_28 [i_5] [i_6] [i_11])))) * (((/* implicit */int) (unsigned short)51084))))) ? ((-(((((/* implicit */_Bool) 2301181304U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10486))) : (arr_18 [i_4] [i_4] [i_11]))))) : ((-(((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_10] [i_11])) ? (arr_18 [i_5] [(_Bool)1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    arr_38 [i_6] [i_5] [i_4] &= ((/* implicit */unsigned long long int) arr_19 [i_4]);
                    var_24 &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_35 [i_4] [i_5] [i_6] [i_6])))), (((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4]))));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 3460382729717932358LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55323))) : (var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))))))));
}
