/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110747
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
    var_20 ^= ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 3] [(unsigned char)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) ((unsigned char) var_13))) - (62)))))) ? (((((/* implicit */int) var_17)) >> (((var_18) - (8658147250082360279LL))))) : (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned char)194)) : (-974083503)))));
                arr_6 [i_0] [2] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (192U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (max((var_12), (((/* implicit */unsigned long long int) var_4)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) var_14)), (((/* implicit */unsigned short) ((var_16) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_22 = ((/* implicit */long long int) var_8);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (signed char)2))));
                        var_24 = ((/* implicit */signed char) ((long long int) var_17));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((long long int) var_13))))) ? (((((/* implicit */_Bool) min((var_9), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -135800755)))))) : (4611686018423193600ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_1), ((_Bool)1)))), (var_14)))))))));
                            var_26 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (8782970825142000482LL)));
                            var_27 = ((/* implicit */unsigned short) var_16);
                        }
                        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15)))) + (((long long int) 511LL)))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) & (((((/* implicit */int) (unsigned short)32768)) >> (((1152921504539738112LL) - (1152921504539738109LL)))))));
                            arr_23 [6LL] [2ULL] [5LL] |= ((/* implicit */long long int) (((~(var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7))))));
                            var_30 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned int) var_16)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 1; i_8 < 6; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                            var_32 = ((/* implicit */unsigned long long int) var_11);
                        }
                        arr_34 [(signed char)3] [i_8 - 1] [(short)3] [(short)5] [(unsigned char)1] [4LL] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_18))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) -481790440)) ? (1795256949) : (((/* implicit */int) var_6)))) / (((((/* implicit */int) var_2)) << (((var_4) - (3167328038U))))))))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (15509936894473356416ULL) : (((/* implicit */unsigned long long int) min((288230376151710720LL), (((/* implicit */long long int) -948681046)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(var_1))))))))))));
                    }
                } 
            } 
        } 
        arr_35 [i_2] = ((/* implicit */short) (((+(-5901390596737404905LL))) & (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
    }
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        var_34 = ((/* implicit */long long int) max((var_34), (((((((/* implicit */_Bool) (short)-6427)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))))));
        var_35 = ((/* implicit */unsigned int) var_5);
        var_36 = ((/* implicit */int) min((max((574208952489738240LL), (((/* implicit */long long int) var_11)))), (var_7)));
        arr_38 [10ULL] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_8))));
    }
    for (short i_13 = 1; i_13 < 13; i_13 += 1) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)97)))))))));
        arr_42 [0ULL] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) - (((/* implicit */int) (signed char)77))));
    }
    for (signed char i_14 = 3; i_14 < 23; i_14 += 3) 
    {
        arr_46 [(unsigned char)11] [(short)7] = ((/* implicit */int) (!(((/* implicit */_Bool) var_19))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) > (((((/* implicit */_Bool) 36028797018963968LL)) ? (var_18) : (((/* implicit */long long int) var_15))))));
    }
}
