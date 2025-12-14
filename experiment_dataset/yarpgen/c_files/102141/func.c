/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102141
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-6922)) ^ (((/* implicit */int) var_0))));
    var_14 = ((unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_1]))) : (max((var_10), (arr_0 [i_0]))));
            var_17 ^= ((/* implicit */short) min((((/* implicit */int) (unsigned short)1096)), ((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */signed char) (_Bool)1))))) ? (min((min((((/* implicit */unsigned long long int) arr_2 [i_1] [(_Bool)0])), (arr_4 [i_0]))), ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))) : (var_6)));
                var_19 *= ((/* implicit */signed char) (+(max((arr_4 [i_1]), (((unsigned long long int) var_12))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_3 - 1])) ? (arr_2 [i_3 - 3] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23822)))));
                arr_9 [i_3] [i_1] [i_0] = ((var_10) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)0) ? (736745304) : (((/* implicit */int) var_5))))) & (((var_5) ? (-4LL) : (((/* implicit */long long int) var_3))))));
            }
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)-5977))) ? (((/* implicit */unsigned long long int) (~(7129148082189097109LL)))) : (min((16777215ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_18 [11LL] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((int) (signed char)56));
                    var_24 = ((/* implicit */int) arr_2 [i_0] [i_6]);
                }
                var_25 = var_10;
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18388993906661961589ULL) >> (((((/* implicit */int) var_12)) - (31913)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4LL))))));
                    arr_21 [i_0] [i_4] [i_5] [i_7] [i_4] = ((/* implicit */_Bool) ((arr_7 [9ULL] [i_4] [i_4]) ? (((/* implicit */int) arr_7 [i_4] [i_5] [i_7])) : (((/* implicit */int) arr_7 [i_4] [i_5] [i_7]))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_24 [i_8] [i_5] [i_4] [(short)18] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294967291U)) : (16ULL)));
                    var_27 = ((/* implicit */unsigned int) var_4);
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                    var_29 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [(short)18])))) ? ((~(((/* implicit */int) arr_10 [i_0] [6ULL] [i_0])))) : (((/* implicit */int) ((var_5) && (var_9))))));
                    var_30 = ((/* implicit */short) (_Bool)1);
                }
                for (unsigned short i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    var_31 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) 944095866897406214ULL)))));
                    var_32 -= ((/* implicit */signed char) (~(arr_14 [i_10 + 3] [i_10 + 3] [i_10] [i_10])));
                }
            }
            var_33 -= ((/* implicit */unsigned long long int) (_Bool)1);
            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_4]))));
            var_35 = ((/* implicit */unsigned short) ((_Bool) (signed char)25));
        }
    }
    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((short) max((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-14)) + (2147483647))) >> (((arr_20 [(signed char)7] [i_11] [i_11] [i_11] [i_11] [i_11]) - (18179835837126404479ULL))))))))))));
        var_37 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) -6006629154546553679LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) : ((((_Bool)1) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)10), ((signed char)10))))))));
    }
    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_38 = ((/* implicit */int) (((_Bool)1) ? (17653310699470445400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82)))));
        var_39 = ((/* implicit */unsigned short) arr_3 [i_12] [i_12] [i_12]);
    }
    var_40 = ((/* implicit */unsigned int) min((max(((-(var_3))), (((/* implicit */int) max((var_9), (var_2)))))), (2147483628)));
    var_41 = ((/* implicit */_Bool) 15499694940567178364ULL);
}
