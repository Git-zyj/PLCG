/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159975
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25089))) - (arr_2 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)255))))));
        var_14 = max((arr_1 [i_0 + 4]), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (8192U))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_6 [9] [i_1] = ((/* implicit */short) var_7);
            var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0 - 4])));
            var_16 *= (~((-(8192U))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned char i_4 = 4; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_8 [i_0] [i_4]);
                        var_18 = ((/* implicit */int) (-(((arr_12 [i_2] [i_4 + 1] [i_4 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                        var_19 = ((/* implicit */short) max((30410077), (((/* implicit */int) (short)-10575))));
                    }
                } 
            } 
            var_20 = ((/* implicit */int) (+(((-6394070662019578779LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))));
            var_22 = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) 9ULL)) ? (30410098) : (arr_10 [i_0] [i_0] [i_0 - 2] [i_0])))))));
            var_23 = ((/* implicit */signed char) ((long long int) min((arr_13 [i_5] [i_5] [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) -682994118)) && (((/* implicit */_Bool) 17592186044415ULL))))))));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2066)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (4082578521823559489LL) : (((/* implicit */long long int) var_11))))))))) : (((6890952387340619033ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))));
    }
    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
    {
        var_25 = ((/* implicit */_Bool) (+(arr_7 [i_6 - 1])));
        var_26 = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) arr_10 [i_6 - 1] [i_6 + 1] [i_6] [i_6])) < (-1LL))) ? ((+(13U))) : (max((((/* implicit */unsigned int) (unsigned char)7)), (3703936840U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-26446)) == (((/* implicit */int) (short)-26850))))) < (((/* implicit */int) (short)8616)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-2)), (arr_26 [14U] [i_8] [i_7])))) <= (var_8)))) < (((/* implicit */int) (unsigned char)160))));
                    arr_27 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) var_10)) : (var_12)))) ? ((~(580419306781423891ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) * (19ULL)))))));
                }
            } 
        } 
        arr_28 [i_7] = ((/* implicit */unsigned short) arr_13 [i_7] [i_7] [10LL] [i_7] [i_7]);
        var_28 = ((/* implicit */unsigned short) (-(max((arr_10 [i_7] [i_7] [i_7] [14]), (((((/* implicit */_Bool) (unsigned char)61)) ? (arr_10 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) (unsigned short)24855))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 2) 
        {
            arr_36 [i_10] [3ULL] [i_10] = ((/* implicit */unsigned long long int) 8192U);
            /* LoopSeq 1 */
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                arr_39 [i_10] [i_10] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)7))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((short)3016), (((/* implicit */short) (signed char)53)))))))) ? (8187U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_11 - 2] [i_12 + 1] [i_12 - 1])))))));
                arr_40 [i_10] [i_10] = ((/* implicit */unsigned int) arr_22 [4U]);
                var_30 = ((/* implicit */long long int) min(((-(((18446744073709551595ULL) + (((/* implicit */unsigned long long int) -1709539078)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [0ULL] [i_11] [i_11])) / (((/* implicit */int) var_4))))) * (((((/* implicit */_Bool) var_1)) ? (6965597770094437996LL) : (-8940788583194711331LL))))))));
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_31 = arr_33 [i_10] [i_13] [i_10];
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)53)) ? (-2048) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_46 [i_14 - 2] [8U])))) ^ (((/* implicit */int) min(((unsigned char)149), (((/* implicit */unsigned char) (signed char)48))))))))));
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) (_Bool)1);
                var_35 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (65532)))))))) < (((((/* implicit */_Bool) var_0)) ? (arr_29 [i_14 + 1] [(short)6]) : (18446744073709551596ULL)))));
                arr_51 [(short)5] [i_14] [i_10] = ((/* implicit */unsigned long long int) (signed char)-63);
                var_36 += ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (signed char)0)), (arr_4 [i_14 + 1] [i_14 + 1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-54)), ((short)(-32767 - 1))))))));
                var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_26 [i_10] [i_10] [0])))) & (var_8)))) ? (var_7) : (((((/* implicit */_Bool) 8184U)) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) (unsigned short)65519)))) : (((/* implicit */int) (unsigned short)6658))))));
            }
            var_38 *= ((/* implicit */unsigned short) 1873314590);
        }
        arr_52 [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)-16)))) ^ (((/* implicit */int) (signed char)-16))));
    }
    var_39 |= ((/* implicit */unsigned int) (~(var_6)));
}
