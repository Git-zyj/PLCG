/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168432
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)49))))) ? ((~(8))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)0)))))) + (2147483647))) >> (((((16548741290702976994ULL) << (((/* implicit */int) (_Bool)1)))) - (14650738507696402341ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)141))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)19731)))) : (((/* implicit */int) var_12))))));
        var_20 ^= ((/* implicit */short) ((((((/* implicit */int) ((short) (_Bool)1))) > (8))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) (signed char)0)) ? (3329650894252737303ULL) : (((/* implicit */unsigned long long int) var_16)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2047270307)) && ((_Bool)1)))), (min((0ULL), (((/* implicit */unsigned long long int) (short)-4991))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1 + 1] = ((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) var_7))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((4270382604952645340LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_4))))))))))));
            arr_11 [i_1] = ((/* implicit */unsigned short) 18446744073709551605ULL);
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_3)) | ((~(((/* implicit */int) (unsigned char)236))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (signed char)0)) ? ((-(var_16))) : (((/* implicit */int) var_17)))) : (min((2047270307), (((((/* implicit */_Bool) 4270382604952645340LL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (short)9859))))))));
            arr_14 [i_1] = ((/* implicit */unsigned long long int) var_12);
            arr_15 [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)183)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((var_13), (((/* implicit */unsigned long long int) var_17))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        arr_19 [i_4] = (-(((/* implicit */int) (_Bool)1)));
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (3329650894252737303ULL)));
        arr_20 [i_4 + 2] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
        var_25 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
    {
        var_26 ^= ((/* implicit */_Bool) -4270382604952645341LL);
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)107)) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_3))))));
    }
    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */short) min(((-(4270382604952645341LL))), (((/* implicit */long long int) max((var_17), (var_17))))));
        var_28 = ((/* implicit */unsigned char) max(((signed char)-20), (((/* implicit */signed char) ((14249841070805794025ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))));
    }
}
