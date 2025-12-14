/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178847
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [(signed char)19] = max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (min(((unsigned short)65518), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))));
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)30692)), ((+(((/* implicit */int) (unsigned char)97)))))))));
        var_13 = ((/* implicit */_Bool) (unsigned char)113);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)158)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_4] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) != (((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)8192))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_1 [i_0] [i_1]))));
                        }
                    } 
                } 
            } 
            var_17 |= ((/* implicit */short) (((+(((/* implicit */int) (signed char)67)))) - (((((/* implicit */int) (unsigned char)175)) << (((/* implicit */int) (_Bool)1))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned short) max((arr_6 [i_5]), (((short) arr_6 [i_5]))));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-109))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_19 [(short)12] = ((/* implicit */unsigned char) (signed char)12);
        arr_20 [i_6] = ((/* implicit */signed char) 743473544U);
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)60139))));
        arr_21 [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)60139)) ? (((/* implicit */int) (unsigned short)60139)) : (((/* implicit */int) (signed char)-109))))));
    }
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_7]));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)112)) | (((/* implicit */int) (signed char)108))))) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483637)))))))) ? (((/* implicit */int) ((_Bool) max((6265266167305547296ULL), (((/* implicit */unsigned long long int) 2147483647)))))) : ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)106)), ((short)21349)))))))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_8))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)42809)) != (((/* implicit */int) (unsigned char)255))));
}
