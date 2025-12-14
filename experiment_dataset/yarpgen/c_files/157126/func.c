/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157126
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 - 1]))));
            var_18 |= ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1]));
        }
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) 13711689314539828130ULL);
            var_20 = ((/* implicit */short) ((int) (_Bool)0));
        }
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_22 = (_Bool)1;
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((-14378246289526201LL) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(unsigned short)12] [(unsigned short)12] [i_4] [i_5] [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (1494934489))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0 - 3] [i_3 - 1] [i_4] [i_0 - 3] [i_0] = ((/* implicit */_Bool) (+(-636738557)));
                        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32767))));
                    }
                    var_26 = ((/* implicit */signed char) arr_10 [i_0]);
                    var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)60)) ? (17703123303249237220ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))) / (((/* implicit */unsigned long long int) arr_0 [i_8]))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) arr_9 [(_Bool)1]))))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4] [i_8]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (8532462633866002666LL)));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_3] [i_4] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)158)) ? (arr_7 [i_0 - 1] [i_3 + 1] [i_4]) : (arr_7 [i_0 - 2] [i_3 + 1] [i_4])));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((523882785U) >> (((((/* implicit */int) var_13)) - (19621))))))));
                    var_31 = ((/* implicit */unsigned long long int) var_14);
                    arr_33 [i_0] [i_0] [13ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                }
            }
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)1))));
                    var_33 = ((/* implicit */unsigned short) ((arr_8 [i_0]) || (((/* implicit */_Bool) (unsigned char)11))));
                    var_34 = ((/* implicit */short) -1429001767993124683LL);
                }
                var_35 = (_Bool)1;
                var_36 = ((/* implicit */unsigned char) 1779876204);
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_30 [i_0] [i_0] [i_0]))) | (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_0)) - (58)))))));
                    arr_44 [i_0] [i_10] [i_12] = ((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2]);
                    arr_45 [i_0 - 3] [i_0 - 3] [i_0] = var_1;
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    var_38 = (!(((/* implicit */_Bool) var_5)));
                    var_39 = ((/* implicit */signed char) ((var_14) ^ (var_14)));
                }
                var_40 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-17668))));
            }
        }
        var_41 = ((/* implicit */unsigned long long int) ((signed char) var_16));
    }
    /* LoopSeq 2 */
    for (unsigned int i_14 = 4; i_14 < 19; i_14 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_42 = ((/* implicit */long long int) (short)-32735);
            var_43 = ((/* implicit */signed char) 2147483647);
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_44 = ((/* implicit */unsigned short) (~(14378246289526200LL)));
            var_45 += ((/* implicit */unsigned long long int) (~(14378246289526217LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_16] [i_16])) / (((/* implicit */int) var_15))))) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                var_47 = ((/* implicit */unsigned long long int) (!(arr_51 [i_16] [i_17 + 3])));
            }
            var_48 = ((/* implicit */unsigned short) ((arr_48 [i_14]) > (((/* implicit */int) arr_54 [i_14 - 4] [(_Bool)1]))));
        }
        var_49 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (unsigned char)158)))))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 4; i_18 < 19; i_18 += 2) /* same iter space */
    {
        var_50 = (+((-2147483647 - 1)));
        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26846))) : (arr_59 [i_18 + 1])));
    }
    var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)54619)))) : (((/* implicit */int) var_0)))))));
    var_53 = (_Bool)1;
    var_54 |= ((/* implicit */signed char) var_14);
}
