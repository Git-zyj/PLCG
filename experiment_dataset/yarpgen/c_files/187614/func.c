/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187614
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3 + 1])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3 + 3]))))) ? (((long long int) arr_4 [i_3 + 4] [i_3 - 2] [i_3] [i_3 - 2])) : (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12705261565214696470ULL)))))) : (var_10))))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((arr_6 [i_4] [i_3 + 4] [i_0]) > (arr_6 [i_0] [i_1] [i_3 - 1]))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))) >= (2901266393U))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) (+((~(((/* implicit */int) var_9))))))) == (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */long long int) 3230242556U)) : ((+(638293941701377797LL)))))));
                    var_17 = ((/* implicit */long long int) ((short) 2901266377U));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) <= (-6972606069928497647LL)));
        arr_14 [i_0] = ((/* implicit */signed char) ((short) var_5));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((var_13) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))));
        arr_18 [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) <= (var_11))));
        arr_19 [i_5] = var_12;
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_1)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24427))) : (var_1))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (8849044638071153307ULL) : (18287666484199417586ULL))))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_30 [i_8] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7] [i_8]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (unsigned short)2))))))) >= (((long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_4 [i_5] [i_5] [i_5] [i_8]))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)2047)) : (-297386356)));
                        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_9)))) % (((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) ((18010000462970880LL) % (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 7; i_12 += 4) 
                        {
                            arr_42 [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 - 1] [i_12 + 3])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_5]))) == (arr_39 [i_5] [i_9] [i_9 + 1] [i_11] [i_9] [i_9])))) : (((/* implicit */int) ((var_11) != (((/* implicit */long long int) var_6)))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) 11534265227232777711ULL)))))));
                        }
                    }
                } 
            } 
            var_25 ^= ((/* implicit */unsigned int) var_8);
            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_10 [i_9 - 1] [i_9 + 1] [i_9 + 1]) > (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (arr_7 [i_5] [i_5] [i_9])))) : (max((var_3), (((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5]))))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_5] [i_5] [i_9] [i_9]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6876765460043351980LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32750))) : (-468156390874820814LL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_32 [i_5] [i_9 - 1])) == (var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_5]))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
        }
    }
    var_28 = ((/* implicit */unsigned short) var_3);
    var_29 = ((((/* implicit */_Bool) var_9)) ? ((~(((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((long long int) var_0)));
}
