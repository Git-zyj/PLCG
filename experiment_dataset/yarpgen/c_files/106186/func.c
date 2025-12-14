/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106186
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [(unsigned short)12] = ((max((max((arr_1 [i_1]), (var_9))), (((/* implicit */int) ((arr_3 [i_0] [i_1]) == (((/* implicit */long long int) var_11))))))) >= (((/* implicit */int) ((min((((/* implicit */int) (signed char)46)), (247248462))) < (((/* implicit */int) ((((/* implicit */int) (signed char)-47)) > (((/* implicit */int) var_13)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [(unsigned short)5] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_3 - 3] [i_2 + 1])) ? (((/* implicit */long long int) arr_7 [i_3 - 3] [(signed char)6] [i_2 - 2] [i_2 - 2])) : (var_2)))) ? (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3962081881280843045ULL)) ? (90764053) : (var_5)))) : (((unsigned long long int) arr_2 [i_2])))) : (((unsigned long long int) arr_5 [i_0] [i_0] [i_1]))));
                            var_16 = min((((/* implicit */int) min((((unsigned short) 2612106400U)), (((/* implicit */unsigned short) var_15))))), (((((/* implicit */int) (signed char)77)) ^ (arr_6 [i_2 + 1] [i_3 - 1] [i_3 - 2]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1744170328779294778LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) (+(620054839561879492ULL)))) ? (max((((/* implicit */unsigned long long int) (short)2040)), (130816ULL))) : (((/* implicit */unsigned long long int) (+(1682860920U))))))));
                            arr_12 [i_0] [i_1] [i_2] [15ULL] = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        for (int i_5 = 1; i_5 < 24; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_16 [i_4] [i_4] [23]))));
                var_18 = ((/* implicit */short) ((int) 749553366));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_24 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */int) (short)28967);
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_25 [i_6] [i_9 - 3] [i_9 - 3] [i_7])) ? (min((((/* implicit */unsigned long long int) 646226817)), (arr_0 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_6])))))), (((min((var_8), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_20 -= ((/* implicit */unsigned long long int) arr_7 [i_6] [i_7] [i_8] [i_9]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_33 [i_11] [i_10] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)1931);
                                var_21 = ((/* implicit */long long int) (~(((var_3) ? (arr_7 [i_11 + 2] [i_11] [i_11] [i_11]) : (((/* implicit */int) (signed char)63))))));
                            }
                        } 
                    } 
                    arr_34 [i_6] [i_6] [2U] [i_8] = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(8673458802345730350ULL))))))) <= (((/* implicit */int) arr_30 [i_7] [i_7] [(_Bool)1] [(_Bool)1] [i_7])));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(arr_28 [i_6] [i_7] [i_8] [i_8] [i_8])))) ^ ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) + (18446744073709551611ULL)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18; i_12 += 3) 
        {
            for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 2) 
                    {
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_7 [i_6] [i_12] [i_6] [i_14]) & (arr_23 [i_6] [12ULL] [i_14])))) & (((unsigned int) 620054839561879492ULL))))) > (min((arr_22 [i_12] [i_13] [i_13 - 1] [i_13]), (((/* implicit */long long int) var_15))))));
                        var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(2612106400U)))), (((((/* implicit */unsigned long long int) var_12)) | (2304717109306851328ULL)))));
                    }
                    var_25 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_13 - 2]))))), (min((((/* implicit */unsigned long long int) max((414056510), (889229231)))), (18446744073709551606ULL))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) min(((-(((unsigned long long int) -89465302)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_7))))))));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 21; i_15 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) (signed char)-71);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 749553365)) ? (((/* implicit */int) arr_44 [i_15 + 1])) : ((-(var_12))))))));
    }
}
