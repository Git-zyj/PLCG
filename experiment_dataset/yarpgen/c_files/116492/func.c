/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116492
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
    var_12 = ((/* implicit */unsigned short) var_10);
    var_13 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (3U)))) ? (((unsigned long long int) (short)0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 141394950321039364ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)15))))))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [(short)4])))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0)))));
                        var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_2 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) max(((unsigned short)1023), (((/* implicit */unsigned short) (short)30))))) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_10 [i_0] [i_2] [(signed char)4] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (signed char)-98))))));
                        var_17 = min((((/* implicit */int) (_Bool)1)), (1188595099));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_11)))));
        var_19 = ((((/* implicit */_Bool) ((141394950321039364ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4])))))) ? (((/* implicit */int) ((_Bool) arr_12 [i_4]))) : (((/* implicit */int) var_7)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) (_Bool)1)))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_20 [i_6] [i_6] = ((/* implicit */short) ((signed char) min((arr_19 [i_5] [i_5]), (arr_19 [i_6] [i_5]))));
                arr_21 [(short)17] = max((((signed char) 4294967293U)), (((signed char) ((arr_14 [i_5] [i_5]) ? (((/* implicit */int) arr_18 [i_5] [(short)17] [(unsigned char)24])) : (((/* implicit */int) var_4))))));
                var_21 = ((/* implicit */short) ((_Bool) ((short) ((int) var_4))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_1))))))));
            arr_25 [i_5] [7U] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
        }
        var_23 -= ((_Bool) (_Bool)1);
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -1188595100))) ? ((-(((/* implicit */int) (short)-31)))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_22 [i_5])) % (((/* implicit */int) var_1))))))));
            arr_30 [i_9] = ((/* implicit */_Bool) (((+(-1663492198))) + (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 203465736U)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_34 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) -784199511)))));
            var_25 = ((unsigned int) (~(arr_26 [i_10])));
        }
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3552277372U)));
            arr_37 [i_11] [i_11] [i_5] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (short)12)) ? (arr_26 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) (signed char)97))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)28353)))))))));
            arr_38 [i_11] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) max((var_11), (((/* implicit */short) (signed char)-120)))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            arr_43 [i_5] = ((/* implicit */short) ((_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_5])) : (13))))));
            var_27 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((arr_16 [i_12] [i_5]) * (((/* implicit */int) arr_24 [21ULL] [i_12])))))) + (((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (arr_27 [(unsigned short)1])))))));
        }
        arr_44 [(signed char)19] &= ((/* implicit */long long int) ((29U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
    }
    var_28 ^= ((/* implicit */signed char) max(((!((!((_Bool)1))))), ((!(((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_6)))))))));
}
