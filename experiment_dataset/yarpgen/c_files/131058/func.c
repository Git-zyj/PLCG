/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131058
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
    var_18 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) 4979357789982877043ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)186)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (8209023456324503869LL) : (((/* implicit */long long int) var_10))))) : (var_3))) : (4979357789982877035ULL)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 8644878)) ? (13467386283726674580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (unsigned short)39824)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18095734876728092570ULL)) ? (((/* implicit */unsigned long long int) 694243867)) : (4979357789982877056ULL)))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) 1138712371)) ? (((/* implicit */int) (short)29737)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11)) ? (((/* implicit */int) arr_1 [20ULL])) : (1138712371)))) ? (min((2147483647), (999603070))) : (((((/* implicit */int) (unsigned char)48)) - (1822606843))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((min((4914635393191219105ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [19])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)25689)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)27204)))))) : (((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)117))))) : (-368398757795380962LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (unsigned char)32)))))) ? (((unsigned long long int) arr_9 [i_1] [i_1])) : (((/* implicit */unsigned long long int) min((((int) -1532831217)), (((/* implicit */int) (unsigned short)25705)))))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) max(((~(arr_7 [i_1]))), ((+(-6229417436110920870LL))))));
        var_22 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
        arr_11 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (825434445)));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14226721038956203926ULL)) ? (((/* implicit */unsigned long long int) -20)) : (arr_20 [i_2] [i_4])))) ? (arr_13 [i_2]) : (((/* implicit */unsigned int) -1455588204))));
                    var_24 &= ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_2]))));
                    arr_21 [i_2] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) ((arr_14 [i_5] [(_Bool)0] [i_4 + 1]) & (((/* implicit */long long int) arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                    var_25 &= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_4 + 1] [i_3 - 2])) - (((/* implicit */int) arr_0 [i_2] [i_3]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_3] [(unsigned short)6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_2] [i_2] [i_4])) : (1423933754)))) ? (((/* implicit */unsigned long long int) arr_23 [i_4])) : (16161553400789415562ULL)));
                    arr_27 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) 1524721134);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) -1423933754))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_20 [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) 2340656781U)) : (17959111722360660490ULL))) : (((/* implicit */unsigned long long int) 878746248U))));
                }
                arr_28 [i_4] = ((/* implicit */unsigned long long int) (-(2305840810190438400LL)));
                var_28 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_3] [10ULL])) : (-681754486))) : (((((/* implicit */_Bool) -1167650245)) ? (-937252556) : (141241527))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 1) 
            {
                var_29 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))));
                var_30 = ((((/* implicit */_Bool) (((_Bool)1) ? (3ULL) : (((/* implicit */unsigned long long int) -1052623564))))) ? (((((/* implicit */_Bool) arr_18 [i_2])) ? (arr_31 [i_2] [i_3] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2]))))) : (((/* implicit */unsigned long long int) arr_17 [i_3 + 1] [i_3 - 2] [i_7 + 2])));
                arr_33 [i_2] [i_3] [i_7] &= (-(arr_19 [i_2] [i_3]));
            }
            for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                arr_36 [i_8] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [i_8]))));
                var_31 = arr_34 [i_3] [i_3] [i_8] [i_8];
            }
        }
        var_32 &= ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])) : (arr_19 [i_2] [i_2]))), (((/* implicit */int) ((unsigned char) arr_18 [i_2]))))));
        var_33 = ((/* implicit */int) arr_13 [(short)8]);
    }
    for (int i_9 = 3; i_9 < 17; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_37 [(short)0]), (779714869)))) ? (((((((/* implicit */int) arr_0 [13] [(unsigned char)23])) < (((/* implicit */int) arr_39 [2ULL])))) ? ((+(18348006257700200423ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_41 [i_9 - 3])) : (arr_37 [(unsigned char)8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [8ULL]))))))));
            arr_42 [i_9] [4ULL] [i_10] &= ((/* implicit */int) 17490260069034337260ULL);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) -7197942761375029193LL))));
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (7197942761375029193LL) : (((/* implicit */long long int) arr_37 [i_9]))))) ? (((/* implicit */int) arr_0 [i_9 - 3] [i_9 - 1])) : (((arr_37 [i_9]) | (-1929193590)))));
            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) - (17490260069034337248ULL))))));
            var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)87)) ? (368398757795380950LL) : (((/* implicit */long long int) arr_38 [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9 - 2] [i_9]))) : (((((/* implicit */_Bool) arr_40 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 937252556)) : (8060917027817573759ULL))));
        }
        var_39 = ((/* implicit */unsigned char) arr_44 [(short)1] [(_Bool)1]);
        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 145469837583065784ULL)) ? (-7197942761375029193LL) : (((/* implicit */long long int) 2147483647))))) ? (((unsigned long long int) arr_40 [i_9] [i_9])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9 + 1] [i_9])))))) ? ((((!(((/* implicit */_Bool) -937252557)))) ? (((-937252570) / (1480613087))) : ((-(((/* implicit */int) arr_43 [i_9] [i_9])))))) : (((((/* implicit */int) arr_43 [i_9] [i_9])) & (((/* implicit */int) arr_43 [i_9] [i_9])))));
    }
    var_41 = var_0;
    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) var_15))));
    var_43 = ((/* implicit */int) max((var_43), ((-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 7197942761375029206LL)) : (var_0)))))))))));
}
