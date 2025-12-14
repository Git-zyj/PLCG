/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11967
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
    var_12 = ((/* implicit */unsigned long long int) ((((((249197429) / (((/* implicit */int) var_9)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))) + (max((var_7), (((/* implicit */int) var_11))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 += ((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17255541738040015931ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [(short)7])) : (arr_5 [i_3])))));
                        var_14 += ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
            var_15 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_8 [(signed char)4] [i_0] [(signed char)4] [i_1] [i_1]))))) ? (var_5) : (1191202335669535702ULL));
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72))))) <= (((unsigned long long int) var_9))));
    }
    for (int i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)27)), (var_7)))) : (((arr_11 [i_4 - 1] [i_4]) ^ (((/* implicit */long long int) -833526409))))))) ? ((-(((unsigned int) var_11)))) : (((/* implicit */unsigned int) (-(max((-2145058860), (((/* implicit */int) arr_12 [i_4] [i_4])))))))));
        var_18 = ((/* implicit */int) max((min((max((((/* implicit */long long int) 3510642978U)), (arr_11 [i_4] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32704)) || (((/* implicit */_Bool) (unsigned char)178))))))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-74)))) * (((arr_11 [i_4 + 1] [(signed char)4]) | (((/* implicit */long long int) var_1))))))));
        var_19 = ((/* implicit */int) 3510642969U);
        var_20 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) -3779849749764845292LL)) : (1191202335669535714ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_12 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((_Bool) max((max((arr_11 [i_5] [(signed char)20]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_10)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4 + 1] [i_4 + 2])) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1307438771990658495ULL)) ? (((/* implicit */int) (short)5840)) : (-1814597034))))));
                        arr_23 [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) min(((short)16), (((/* implicit */short) arr_20 [i_4 + 1] [14ULL] [i_4] [i_4 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        var_23 += ((/* implicit */unsigned char) arr_15 [i_4 + 2] [i_5] [i_6]);
                        arr_26 [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 773467604)) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_4] [21] [2ULL] [i_4] [i_4 - 1]))))));
                        arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_6) - (arr_25 [i_4] [i_4] [i_4] [i_4])))) / (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [i_8] [0] [0] [i_4] [i_4])))))));
                        arr_28 [i_8] [18ULL] [9ULL] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_6] [i_8]))))) ? ((+(13841209658325886274ULL))) : (arr_22 [i_8] [i_8 + 1] [22U] [22U] [i_4])));
                    }
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        var_24 ^= max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (short)22454)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_6)) : (var_0))) : (((var_3) + (((/* implicit */long long int) ((/* implicit */int) (short)-22455))))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) ((arr_4 [i_9]) & (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) min((-2456276666746321433LL), (((/* implicit */long long int) (short)32767))))) : ((~(6438909549356923898ULL))))))))));
    }
}
