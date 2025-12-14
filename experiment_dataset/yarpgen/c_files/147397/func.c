/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147397
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)20)), (9497701384536767317ULL)));
        arr_4 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28672))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)5)))))) : (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned char)149), ((unsigned char)149))))))));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
        arr_5 [8] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) max((((/* implicit */int) (unsigned short)57301)), (var_1))))), (((((/* implicit */_Bool) ((short) (unsigned short)5))) ? (var_1) : ((-(((/* implicit */int) var_6))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) max(((signed char)70), (var_6)))), (((long long int) ((((/* implicit */int) (unsigned char)149)) / (((/* implicit */int) (unsigned short)65374)))))));
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_15 [i_1 + 1] [i_2] [i_4] [(signed char)11] [i_4] [i_4] &= ((unsigned short) (-(((/* implicit */int) (unsigned char)38))));
                        arr_16 [i_1] [i_2 - 3] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)38))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_17 |= ((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))) || ((!(((/* implicit */_Bool) var_8)))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) ^ (min((var_12), (arr_2 [i_1]))))) : (max((var_0), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)21)) >= (((/* implicit */int) (unsigned short)31546))))))));
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (15508254141702981608ULL)));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_2 + 4] [i_1 - 1] [i_3 + 2] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_3)))))));
                        }
                        arr_21 [i_1] [i_2 + 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) ((signed char) 3U)))))) ? ((-(((/* implicit */int) var_10)))) : ((+((-(((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */long long int) max((((((/* implicit */int) var_5)) ^ ((+(((/* implicit */int) (unsigned short)29)))))), (((var_3) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-3789)), (var_5)))) : (((/* implicit */int) ((signed char) var_2)))))));
        arr_22 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((var_3) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : ((-(15508254141702981608ULL))))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (11199287776337353483ULL) : (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [(signed char)12] [i_1] [i_1] [i_1]))))));
    }
    var_22 = ((/* implicit */unsigned int) (-(((long long int) ((unsigned short) var_4)))));
    var_23 = ((/* implicit */_Bool) var_11);
    var_24 &= (~(((unsigned int) ((var_1) >= (((/* implicit */int) (unsigned char)160))))));
}
