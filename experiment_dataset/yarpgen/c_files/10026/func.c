/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10026
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
    var_20 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))));
                arr_7 [i_1] = ((/* implicit */short) ((unsigned long long int) var_7));
            }
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61837)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22484))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22484))) : (var_15)))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_15)));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned short) (short)-22489));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_27 ^= ((/* implicit */short) var_6);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)22506))));
                            var_29 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-20019))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (var_4)));
                            arr_25 [i_7] [i_0] [i_6] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (short)-5767)))));
                        }
                        var_31 = ((((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (((var_19) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52193))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            arr_30 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)25)) << (((/* implicit */int) var_2))))) ^ (((unsigned int) (short)(-32767 - 1)))));
            var_32 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_6)))));
            arr_31 [i_9] [i_9] = ((/* implicit */_Bool) (short)-13796);
        }
        /* LoopSeq 3 */
        for (short i_10 = 2; i_10 < 13; i_10 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (733255574U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))));
            arr_36 [i_0] [i_0] [i_10] = max((((/* implicit */unsigned long long int) (short)-14816)), (10598584447505640422ULL));
            arr_37 [i_0] [i_0] = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_14)))) : (((unsigned long long int) 567369511U)))));
        }
        /* vectorizable */
        for (short i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            arr_40 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((unsigned char) (short)-22507)))));
        }
        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_35 = var_5;
            var_36 = ((/* implicit */_Bool) var_6);
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((unsigned long long int) ((((var_4) || (((/* implicit */_Bool) var_1)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_10)))))))))));
            var_38 = ((/* implicit */short) ((((var_1) << (((var_0) / (var_16))))) - ((-(max((var_15), (((/* implicit */unsigned long long int) var_8))))))));
        }
        /* LoopSeq 2 */
        for (short i_13 = 1; i_13 < 13; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 4; i_14 < 13; i_14 += 2) 
            {
                var_39 = ((unsigned long long int) ((unsigned int) ((_Bool) var_2)));
                var_40 ^= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (short)-10452)), (var_14))), (var_6)));
                var_41 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((short) var_15)))) * (((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) var_0)))))))));
            }
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (((((/* implicit */_Bool) 0ULL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22485)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)42085))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (3136975718U)));
            arr_53 [i_0] [i_15] [i_15] = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_5))));
            var_44 = ((/* implicit */short) ((((/* implicit */int) var_18)) | (((/* implicit */int) (short)12132))));
        }
    }
    for (unsigned short i_16 = 2; i_16 < 15; i_16 += 3) 
    {
        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (unsigned short)51236))));
        arr_58 [i_16] = ((/* implicit */unsigned char) ((3136975718U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-22485)))));
        arr_59 [i_16] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_19)))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52169))) / (var_6)))));
        var_46 = ((short) min(((unsigned short)0), (((/* implicit */unsigned short) (short)28275))));
    }
    var_47 = ((/* implicit */unsigned short) var_1);
    var_48 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (3277837682327292323ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
}
