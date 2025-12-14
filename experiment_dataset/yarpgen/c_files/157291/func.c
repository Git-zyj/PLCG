/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157291
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = 11ULL;
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)32182))))) && (((/* implicit */_Bool) (unsigned short)8))))), (((((15035077170066431743ULL) ^ (arr_2 [(unsigned short)5] [i_1 + 1] [i_2]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_1] [i_2] [i_4 - 1])))))))));
                                var_13 = (-(0ULL));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) 5103184499263598675ULL)) ? (16658791907025163072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2070)))))));
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)48458), (var_9)))) ? (((/* implicit */int) (unsigned short)12064)) : (((/* implicit */int) (unsigned short)23338))))) ? (min((min((((/* implicit */unsigned long long int) var_4)), (16770744063746791451ULL))), (((/* implicit */unsigned long long int) (unsigned short)34781)))) : (max((((/* implicit */unsigned long long int) (unsigned short)35942)), ((~(16548911226681029618ULL)))))));
                            var_16 = ((((/* implicit */_Bool) max((16548911226681029609ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [12ULL] [i_1] [i_5] [11ULL])))))))) ? (var_3) : (8133622588464138332ULL));
                            var_17 *= ((/* implicit */unsigned short) 1897832847028521997ULL);
                            arr_16 [i_6] = max((arr_15 [i_1] [i_5] [i_6]), (var_2));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_7] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)43130))))) ? ((-(var_6))) : (min((6632532889396454659ULL), (5836776909561134444ULL)))))) ? (min((6684737736441704889ULL), (((((/* implicit */_Bool) 15990310500313832223ULL)) ? (arr_4 [i_0] [i_1] [13ULL]) : (1060646025581688182ULL))))) : (((unsigned long long int) min((1152919305583591424ULL), (((/* implicit */unsigned long long int) (unsigned short)50556)))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1046)) ? (((7092050823138368315ULL) * (1897832847028521998ULL))) : ((-(17282237412494578476ULL))))))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((6047333743662235326ULL), (((/* implicit */unsigned long long int) (unsigned short)18212)))))));
                    var_21 = (-(((unsigned long long int) var_6)));
                    arr_19 [i_1 - 1] [i_1 - 1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (unsigned short)41102)));
                }
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((arr_4 [i_0] [i_1 + 1] [i_0 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57831)))))))) * ((-(min((((/* implicit */unsigned long long int) (unsigned short)36903)), (18170421517889522335ULL)))))));
                    arr_22 [i_0 - 1] [i_1] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                }
                for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [16ULL] [i_9] = ((/* implicit */unsigned short) arr_7 [i_0 - 4]);
                    arr_28 [i_0] [i_0] = min((2976969642776059528ULL), (9876108697497032705ULL));
                }
                for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned short) (~(((max((2976969642776059528ULL), (((/* implicit */unsigned long long int) (unsigned short)5599)))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_0])))))))));
                                arr_38 [i_0] [(unsigned short)4] [i_0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-(((((/* implicit */_Bool) var_1)) ? (7687178443478566948ULL) : (var_3))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 1] [i_1])) ? (arr_10 [i_1] [i_1 + 1]) : (arr_2 [i_1 + 2] [i_1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((unsigned long long int) arr_15 [8ULL] [i_1 - 2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20672))))))));
                }
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned long long int) (unsigned short)41599)), (max((2456433573395719392ULL), (((/* implicit */unsigned long long int) var_7))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 3; i_14 < 24; i_14 += 3) 
        {
            {
                var_26 *= ((/* implicit */unsigned long long int) arr_39 [i_13] [i_14 - 1]);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60786)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)4889))));
                var_28 = ((((/* implicit */_Bool) 1897832847028522003ULL)) ? (((((/* implicit */_Bool) var_4)) ? (11815155194948615673ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14195))))) : (((((/* implicit */_Bool) 11295001872404707186ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43843))) : (18446744073709551615ULL))));
                arr_44 [i_13] [i_14] [i_14 - 2] = ((/* implicit */unsigned long long int) var_4);
                /* LoopNest 2 */
                for (unsigned short i_15 = 1; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 3) 
                    {
                        {
                            arr_50 [i_16] [i_16] [i_15 + 1] [i_16 - 1] = (-(((unsigned long long int) arr_40 [i_15 + 1])));
                            arr_51 [i_13] [i_14] [12ULL] [i_16] [i_16] [i_14 - 3] = ((unsigned short) max((18446744073709551615ULL), (var_6)));
                            var_29 -= ((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned short)9315), ((unsigned short)37711))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
