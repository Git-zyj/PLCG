/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181726
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((unsigned int) 1765884139U))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_1] [(_Bool)1] [(signed char)8] [i_3] = min((((arr_10 [i_0] [i_1] [i_1] [i_3]) + (((((/* implicit */int) (short)16383)) - (arr_10 [(signed char)8] [i_1] [i_0] [i_3]))))), (((/* implicit */int) arr_5 [i_2])));
                        var_13 = ((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_0] [i_0]));
                        arr_16 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)16370))));
                    }
                    var_14 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) arr_5 [i_0]))), (min((max((((/* implicit */long long int) 1765884147U)), (-2814093956230238654LL))), (((/* implicit */long long int) max((-1), (-1296597458))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_25 [i_4] [i_5] = ((/* implicit */int) ((short) arr_22 [i_4 + 3] [i_4 + 2] [i_4 - 1]));
                            arr_26 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) arr_3 [i_2] [i_4])))));
                            var_15 = ((/* implicit */long long int) 17640831807125218138ULL);
                            var_16 = ((/* implicit */int) arr_5 [i_2]);
                            arr_27 [i_1] [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [(signed char)10] [i_4 + 1] [i_4] [22U] [i_0]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) -1463375636);
                            arr_31 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((int) 2813374338940990746LL));
                            arr_32 [i_4] [i_1] [(short)19] [i_4] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (short)0))))));
                            arr_33 [i_0] [(unsigned char)14] [(unsigned char)14] [i_4] [i_4] [i_6] [i_4] = ((int) ((unsigned short) (_Bool)1));
                        }
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [14ULL] [i_4] [14ULL] [i_7] = ((/* implicit */unsigned long long int) ((8758304004104208653ULL) >= (((/* implicit */unsigned long long int) 408404547))));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_4] [i_4] [i_2] [i_4 - 1] [15] [i_2]));
                        }
                        arr_38 [i_0] [i_1] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) arr_10 [(short)18] [4ULL] [i_2] [i_4])) & (-2814093956230238667LL))) << (((1463375635) - (1463375617)))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */int) ((short) ((unsigned char) arr_10 [i_0] [i_4 + 2] [i_1] [i_2])));
                            var_19 = ((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_4 + 3] [i_2]));
                            arr_42 [i_0] [i_1] [i_0] [i_4] = arr_6 [i_4 + 3];
                            var_20 = ((/* implicit */unsigned int) ((arr_34 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4 + 2]) >= (arr_34 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4 + 2])));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2152))) * (6079874198645327111ULL)));
                    }
                    for (short i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77)))))));
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)22232)))) ^ (arr_14 [1U] [i_9 - 1] [(unsigned short)23]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59915)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((((((/* implicit */int) arr_6 [i_1])) | (206754605))) + (2147483647))) >> (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)224))) / (6801140156235200180LL))))));
                        arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -2813374338940990746LL);
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_24 &= ((/* implicit */long long int) ((unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned short)27929)) << (((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (36695)))))));
                        var_25 = ((short) (signed char)50);
                        arr_52 [i_0] [i_1] [i_1] [i_2] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */int) arr_40 [i_1])), (max((arr_19 [i_11]), (((/* implicit */int) arr_51 [i_11] [i_1] [i_0]))))))) - (((min((((/* implicit */long long int) 1296597457)), (-288230376151711744LL))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-31)))))));
                        arr_53 [i_0] = ((/* implicit */unsigned int) max((-2813374338940990750LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-76)), ((unsigned char)38)))))))));
                        arr_54 [(signed char)21] [i_1] [i_1] [i_11] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11957))) * (13689057219996521536ULL)))))))) + (((unsigned long long int) 8002842770226640719ULL))));
                    }
                }
                for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    var_26 = ((/* implicit */int) (-((+(((288230376151711743LL) >> (((1267184326U) - (1267184322U)))))))));
                    arr_58 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_8 [i_12]);
                    arr_59 [i_0] [i_0] &= ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned short)33209))) * (((/* implicit */int) ((-1012308039) > (((/* implicit */int) arr_5 [(unsigned char)6])))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))) - (10005305178761917201ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) max(((unsigned char)38), (((/* implicit */unsigned char) ((max((-1868376696574611111LL), (((/* implicit */long long int) -1012308039)))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))))))));
                                var_28 = ((short) 10005305178761917226ULL);
                            }
                        } 
                    } 
                }
                for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                        {
                            {
                                arr_72 [i_0] [i_15] [i_16] = ((/* implicit */short) (_Bool)1);
                                arr_73 [i_0] [4LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1016711003);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        for (unsigned char i_19 = 3; i_19 < 24; i_19 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((3808167266415624169LL) + (((/* implicit */long long int) ((unsigned int) (unsigned short)32327)))));
                                var_30 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_67 [i_19 + 1] [0U] [i_19])))) | (arr_67 [i_19 - 2] [i_19] [i_19 - 2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_84 [i_0] [i_1] [i_1] [(unsigned short)19] [i_21] [i_20] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 4306419006973098896LL))) + (((arr_70 [i_20] [(unsigned short)7] [i_20] [i_20] [i_20] [i_20]) / (arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_85 [i_0] [(unsigned short)13] [i_21] [i_0] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)78))))) ^ (((((unsigned long long int) (-2147483647 - 1))) >> (((max((((/* implicit */int) (_Bool)1)), (arr_82 [i_0] [i_0]))) - (1045602803)))))));
                                var_31 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) arr_44 [i_0])));
                                var_32 = ((/* implicit */long long int) arr_39 [20ULL] [(short)0] [i_15] [i_20]);
                            }
                        } 
                    } 
                }
                arr_86 [(signed char)18] [9ULL] [i_0] = ((/* implicit */signed char) (!((((((_Bool)1) || (((/* implicit */_Bool) arr_78 [i_0] [24ULL] [(signed char)19] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_77 [i_1] [4] [i_0] [i_1] [i_1] [i_1] [i_1])), (468672830))))))));
                var_33 = ((/* implicit */long long int) (unsigned char)204);
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) ((long long int) max((-3808167266415624170LL), (((/* implicit */long long int) -885017624)))));
}
