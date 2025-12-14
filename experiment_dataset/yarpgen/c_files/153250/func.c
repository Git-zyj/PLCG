/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153250
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) (((_Bool)1) ? (arr_1 [12LL]) : (arr_1 [(unsigned short)12])));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((((/* implicit */short) (unsigned char)179)), (arr_2 [13U])))) | (arr_1 [i_0]))) | (((/* implicit */int) arr_2 [3]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56347)) ? (arr_1 [i_0]) : (((/* implicit */int) var_1))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (16847902399710104256ULL)))));
        var_22 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)76)) & (arr_1 [i_0]))), ((-(var_19)))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_0 [i_1]), (((/* implicit */long long int) arr_10 [(signed char)8])))), (((/* implicit */long long int) ((int) var_10)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)14))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) min((-712144422), (((/* implicit */int) (unsigned char)204))))) : (arr_9 [i_1] [(unsigned char)2] [i_2])))) ? (((/* implicit */int) arr_11 [i_1] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3499498396543920834LL)) ? (var_19) : (((/* implicit */int) (unsigned short)25821))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [(unsigned char)13])) : (((/* implicit */int) arr_8 [13])))) : (((/* implicit */int) (unsigned char)252)))))))));
            var_26 = ((/* implicit */int) (short)8);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_1])), (arr_10 [i_2])))) ? (((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [1LL])) : (arr_5 [i_1])))) : (max((arr_1 [i_1]), (arr_7 [i_2])))));
            arr_12 [i_1] [i_2] [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15862791852762242505ULL)) ? (((/* implicit */unsigned long long int) 1245798912U)) : (arr_5 [i_1])))) ? (18040636178976682754ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_19) : (((((/* implicit */_Bool) arr_5 [(signed char)14])) ? (((/* implicit */int) (unsigned short)8)) : (arr_7 [i_1]))))))));
        }
        arr_13 [i_1] = ((/* implicit */_Bool) (unsigned short)0);
    }
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)35397)) ? (238447093) : (((/* implicit */int) (_Bool)1))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-31088)) | (((/* implicit */int) (unsigned char)40))));
        arr_17 [i_3 - 1] [i_3] = ((((/* implicit */int) ((unsigned short) arr_1 [i_3 + 1]))) | (((/* implicit */int) var_7)));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_14))));
                /* LoopSeq 1 */
                for (short i_6 = 4; i_6 < 19; i_6 += 2) 
                {
                    var_30 *= ((/* implicit */unsigned int) arr_19 [i_6]);
                    var_31 = ((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_4])) ? (2260787242U) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)207)) | (((/* implicit */int) (short)-21754)))), (((/* implicit */int) (_Bool)1))))));
                    var_32 *= ((/* implicit */unsigned long long int) ((arr_21 [(unsigned char)7] [i_5] [i_3]) ? ((+(((((/* implicit */_Bool) (short)31119)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (-4481940428187346053LL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)4020)))));
                    var_33 = arr_21 [14] [i_4] [i_3];
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_30 [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) max((var_6), (max(((((_Bool)1) ? (2067473153U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10234))))), (((/* implicit */unsigned int) arr_14 [i_3]))))));
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (_Bool)1))));
                arr_31 [16U] [i_7] |= ((/* implicit */signed char) (_Bool)1);
            }
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) arr_20 [i_4] [i_3])) : (((/* implicit */int) (unsigned char)207)))), (((/* implicit */int) arr_24 [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)76)) ? (((var_1) ? (arr_25 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
            var_36 = ((/* implicit */int) (_Bool)1);
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_35 [i_8] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22))))) : ((-(((/* implicit */int) (unsigned short)38))))));
        arr_36 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(signed char)6] [i_8] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)63192))))) && (((/* implicit */_Bool) 10180246383606148269ULL)))) || (((/* implicit */_Bool) arr_24 [4]))));
        var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_8] [i_8] [i_8]) ? (arr_0 [i_8]) : (((/* implicit */long long int) 1282005766U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (arr_23 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (min((min((((/* implicit */unsigned long long int) 0U)), (18446744073709551614ULL))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (var_17)))))));
        var_38 = ((arr_23 [(unsigned short)6] [(unsigned char)6] [(unsigned short)6] [i_8]) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3261267181U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (2067473153U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) (short)-31120)) : (((/* implicit */int) (unsigned short)38))))))));
    }
}
