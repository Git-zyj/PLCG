/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101449
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
    var_20 |= ((/* implicit */signed char) (unsigned short)37693);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (7168979398320437652LL)));
        arr_5 [i_0] = (signed char)45;
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_10 [i_1] [6] = ((/* implicit */unsigned int) -596307106);
        arr_11 [i_1] = ((/* implicit */int) (unsigned char)6);
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)3))));
    }
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_21 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-((+(arr_20 [i_2 - 1])))));
                    arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_4]))) == (arr_16 [i_2] [i_2])))))));
                    arr_23 [14] [14] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_4])) || (((((/* implicit */_Bool) 7168979398320437652LL)) && (((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 + 1]))))));
                }
            } 
        } 
        arr_24 [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_14 [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) (signed char)-45))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-46)))))) : (((((/* implicit */_Bool) arr_15 [i_2 - 1] [11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) arr_17 [i_2])))))) : (((2281144731U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_30 [i_2] [i_6] [i_2] [8U] = ((/* implicit */unsigned int) (-(((int) ((((/* implicit */_Bool) 33423360)) ? (((/* implicit */int) arr_25 [i_6])) : (1062119974))))));
                    arr_31 [i_2] [i_6] [i_5] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (signed char)96))));
                    arr_32 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) / ((~(((/* implicit */int) (signed char)-91)))))) <= ((-(((/* implicit */int) (signed char)-95))))));
                    arr_33 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775806LL)) || ((_Bool)0)))) | (((/* implicit */int) (unsigned char)105))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 10; i_8 += 3) 
        {
            {
                arr_40 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)110))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            {
                                arr_49 [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)127)))) <= (((/* implicit */int) min((var_14), (var_10)))))))) & (arr_15 [i_9] [i_8]));
                                arr_50 [i_7] [i_8] [i_9] [(_Bool)1] [i_11] |= ((/* implicit */_Bool) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169)))));
                                arr_51 [i_10] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_8 [i_10 - 3] [i_8 + 2])))) ? (((((/* implicit */_Bool) arr_19 [i_10 - 3] [i_8 + 2] [i_11 - 1])) ? (arr_15 [i_10 - 3] [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10 - 3] [i_8 + 2]))))) : (((/* implicit */unsigned int) (-(-1413826684))))));
                                arr_52 [(unsigned short)9] [i_9] [(unsigned short)9] = ((/* implicit */unsigned char) ((-2067018905) != (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) || (((/* implicit */_Bool) ((signed char) var_17))))))));
                            }
                        } 
                    } 
                } 
                arr_53 [i_8] = ((/* implicit */int) (unsigned char)150);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2013822577U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((-(-7839688065614245141LL))) > (min((var_6), (((/* implicit */long long int) var_7))))))))));
}
