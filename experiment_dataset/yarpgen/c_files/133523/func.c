/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133523
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
    var_19 += ((/* implicit */unsigned int) (~(var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((unsigned int) min((((/* implicit */long long int) (short)0)), (var_12)))), (((/* implicit */unsigned int) ((unsigned char) (+(-270121026)))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)12006)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (579562334U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (4340050717276274466ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) : ((+(1878991397U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 3])))))));
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3] [(unsigned char)13]))) ^ (2464379502U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_22 = ((/* implicit */signed char) arr_7 [8ULL]);
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_12 [(_Bool)1] [i_3] = ((/* implicit */_Bool) (unsigned short)8038);
            var_23 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            arr_22 [i_2] [i_5] [i_2] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)19))))));
                            var_24 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2 - 1])));
                        }
                    } 
                } 
            } 
            var_25 += ((/* implicit */unsigned int) var_17);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                        {
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)-22876))) ? ((~(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_27 -= ((long long int) var_3);
                        }
                        for (int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                        {
                            var_28 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1]))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_8 + 2] [i_2 - 1])))))));
                        }
                        arr_33 [i_2] [i_8] [i_8] [5LL] = ((/* implicit */unsigned long long int) ((((_Bool) arr_18 [(unsigned short)14] [i_4] [i_8 + 2])) ? ((~(arr_23 [i_2] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((270121026) == (((/* implicit */int) (unsigned short)22929))))))));
                        arr_34 [i_2] [i_8] [(short)15] [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) + (((18446744073709551602ULL) >> (((2415975893U) - (2415975844U))))));
                    }
                } 
            } 
        }
        for (signed char i_12 = 1; i_12 < 18; i_12 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) >> (((arr_23 [i_2] [8ULL]) + (951264400970224250LL)))))));
            var_31 ^= ((/* implicit */int) ((signed char) ((2415975893U) * (((/* implicit */unsigned int) ((/* implicit */int) var_18))))));
        }
        for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            var_32 ^= ((/* implicit */long long int) (unsigned short)10970);
            arr_41 [i_2 - 2] = ((/* implicit */unsigned short) ((arr_19 [i_13]) ^ (((/* implicit */unsigned long long int) arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_13] [i_13]))));
            var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (-270121026) : (270121026)))));
            var_34 = ((/* implicit */long long int) (-(1327922167U)));
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_13] [4ULL] [6] [i_13] [4ULL] [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (281474976710656ULL)))) && (((/* implicit */_Bool) arr_32 [i_2 - 2] [i_2] [i_2] [i_13] [i_13] [i_13])))))));
        }
        var_36 = ((/* implicit */long long int) (~(579562322U)));
        var_37 = ((((((/* implicit */_Bool) 270121009)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (8646911284551352320LL))) & (var_8));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        var_38 -= ((((/* implicit */int) ((_Bool) arr_28 [i_14] [(_Bool)1] [(unsigned char)17] [i_14] [i_14] [i_14] [i_14]))) * (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 2147483630))))));
        var_39 *= ((/* implicit */_Bool) ((((unsigned long long int) 19ULL)) ^ (((/* implicit */unsigned long long int) (~(arr_7 [i_14]))))));
        arr_45 [i_14] = ((((/* implicit */_Bool) arr_28 [(unsigned short)1] [i_14] [i_14] [(signed char)5] [i_14] [i_14] [(signed char)5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))));
    }
}
