/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168288
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)91), (min(((signed char)-115), ((signed char)-96))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((unsigned int) (signed char)-91)))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((var_5) / (((/* implicit */int) var_7)))) | (((/* implicit */int) var_7))));
        var_12 *= ((/* implicit */_Bool) (signed char)31);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((+(var_8)))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_13 -= ((/* implicit */int) min((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-97))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */signed char) (((~(255U))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_2)))));
        arr_7 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) 562949953421311ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48655)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) && (((/* implicit */_Bool) (short)-8960))))))))));
        var_14 = ((((/* implicit */_Bool) min((58720256U), (1U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))))))) : (max((min((var_2), (((/* implicit */unsigned int) (unsigned short)40119)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741824U)) && (((/* implicit */_Bool) 4236247069U))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(2478428277U))), (((/* implicit */unsigned int) var_4))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))))));
        }
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
        {
            var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 6589120954380863547LL))) ? (((((((/* implicit */_Bool) var_0)) && (var_7))) ? ((~(((/* implicit */int) (short)-27)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_16 [i_4] [i_4] [i_3] [i_1] = ((/* implicit */signed char) (-(arr_4 [i_1])));
                arr_17 [i_4] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_4]);
            }
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_20 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_10 [i_1] [i_3] [i_5])) / (((/* implicit */int) var_0))))));
                var_17 *= min(((((_Bool)1) ? ((+(605719861U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */unsigned int) var_0)));
            }
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                arr_23 [i_1] = ((/* implicit */short) (+(((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)29))))));
                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(var_6))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) min((((unsigned int) var_0)), (((/* implicit */unsigned int) var_1))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25402)) && (((/* implicit */_Bool) 3904867321U))));
                arr_27 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((8527543506171857365LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33524))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_3)), (var_8)))))) ? (((/* implicit */unsigned int) min((min((((/* implicit */int) var_6)), (arr_14 [i_1] [i_3] [i_7]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : ((~(min((var_2), (((/* implicit */unsigned int) (unsigned short)39099))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                arr_32 [i_1] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 8527543506171857336LL))) ? (((/* implicit */long long int) -1065929682)) : (((((/* implicit */long long int) ((/* implicit */int) (short)-15757))) % (974451178356473371LL)))));
                var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8330))));
            }
        }
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
        {
            arr_35 [i_1] [i_9] [i_1] = ((/* implicit */short) ((signed char) (~(-8527543506171857366LL))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        arr_41 [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_9])))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_39 [i_1] [i_9] [i_9] [i_10] [i_9])))))));
                        arr_42 [i_1] [i_9] [i_1] = ((/* implicit */short) min((((arr_24 [i_1] [i_1] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) max(((signed char)-26), ((signed char)-21))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) var_0);
        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)88))))) : (4419104625024668211LL)));
        arr_45 [i_12] [i_12] = ((/* implicit */long long int) 2534705303U);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) -816629835284918299LL)) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14905)))))));
    }
    var_26 = ((/* implicit */int) var_8);
}
