/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133401
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
    var_17 = ((/* implicit */short) ((_Bool) var_4));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)9035)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [3ULL] = (~(var_11));
        var_19 = var_7;
        arr_3 [(unsigned char)10] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)9048))))));
        var_20 += ((/* implicit */unsigned int) 2123013053);
    }
    for (signed char i_1 = 4; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_21 = max(((~(arr_5 [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) ((arr_5 [i_1] [i_1]) == (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
        var_22 = (+(((((/* implicit */_Bool) max(((unsigned char)3), ((unsigned char)2)))) ? (((/* implicit */unsigned long long int) -1393716498)) : (max((2761043504602112736ULL), (((/* implicit */unsigned long long int) arr_6 [i_1])))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535)))))));
    }
    for (signed char i_2 = 4; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (+(((/* implicit */int) (short)31105)));
        arr_11 [i_2] = ((/* implicit */signed char) max((7738128696719326691ULL), (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)56501)) ? (1601826426) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned short)9034), (((/* implicit */unsigned short) arr_9 [i_2] [i_2 - 4]))))))))));
        var_24 -= ((/* implicit */_Bool) arr_8 [(unsigned short)20]);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))))) ? ((~(((/* implicit */int) arr_6 [i_2])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_13))))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_14 [(unsigned char)1] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) var_16)) : (arr_8 [i_3])))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))))), (((/* implicit */unsigned long long int) (unsigned short)9036))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (9384927330617332281ULL)));
                var_27 = ((/* implicit */short) ((unsigned long long int) var_0));
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_9))));
            }
            var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3] [10])), (((int) -1353648256))))) != (((unsigned long long int) 1097752663U))));
        }
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_30 = ((/* implicit */_Bool) ((int) ((((unsigned int) (_Bool)1)) * (var_16))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_26 [(unsigned char)15] = ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1353648251)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)9048))))) : (var_3)));
                var_31 ^= ((/* implicit */unsigned char) (unsigned short)9053);
            }
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 2) 
            {
                arr_29 [i_3] [i_6] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    arr_32 [i_3] = ((/* implicit */short) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))) > (var_10)))))));
                    arr_33 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) -1353648252)) ? (((unsigned int) (unsigned short)56508)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 242898516U))) >= (((/* implicit */int) arr_27 [i_3] [i_8 - 1] [i_3] [i_8 - 1]))));
                    var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) arr_15 [i_9] [i_8]))))));
                }
                arr_35 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (1724572229566880346ULL)));
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                arr_38 [i_3] [(short)2] [(unsigned short)13] [i_3] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_8)))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), ((!(((((/* implicit */_Bool) max((arr_24 [i_3] [i_6] [i_6] [i_11]), (((/* implicit */signed char) arr_9 [i_6] [i_11]))))) || (arr_12 [i_3] [i_6])))))));
                    var_35 = ((/* implicit */unsigned long long int) max((max((((unsigned int) var_15)), (((/* implicit */unsigned int) ((_Bool) arr_5 [i_3] [(short)10]))))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)198)))));
                    var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (short)16424)) >= (arr_21 [i_3])))), (var_8))))));
                    var_37 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_10])) ? (((arr_27 [i_3] [i_10] [i_3] [i_10]) ? (arr_30 [i_10] [i_10] [i_10] [i_11] [i_10] [(short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25294))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_25 [i_3] [i_6] [i_11]) != (((/* implicit */unsigned long long int) arr_21 [14U])))))))), (var_4)));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_3] [i_6] [i_3] [i_12] = ((/* implicit */unsigned short) arr_27 [i_3] [i_3] [i_10] [(unsigned short)11]);
                    arr_46 [(short)10] [(short)10] [(short)10] [(short)10] [i_12] = ((/* implicit */unsigned long long int) arr_22 [i_6] [i_3]);
                    var_38 += ((/* implicit */unsigned int) max((max((((/* implicit */int) ((7ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) var_8)))));
                    arr_47 [8ULL] [0U] = ((/* implicit */unsigned short) var_13);
                    arr_48 [3ULL] [i_10] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (var_3) : (((/* implicit */unsigned long long int) var_11))));
                }
            }
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */short) (~(((var_4) >> (((arr_21 [i_3]) + (856494898)))))));
            arr_51 [(unsigned short)1] [(unsigned short)1] [i_13] = ((/* implicit */signed char) 2123013053);
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) 2123013053))));
            arr_56 [i_3] [i_14] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (18446744073709551584ULL))));
            var_41 = ((/* implicit */_Bool) ((((unsigned long long int) arr_19 [(signed char)6] [(signed char)6] [(signed char)6])) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) (short)-31107)) : (((/* implicit */int) var_2)))))));
        }
    }
    var_42 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
}
