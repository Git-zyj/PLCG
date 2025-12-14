/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141483
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
    var_10 = ((/* implicit */long long int) ((unsigned long long int) var_3));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */_Bool) ((((((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1] [i_0])) + (2147483647))) << (((arr_0 [i_0]) - (7185074802198974976LL))))) & (((/* implicit */int) min(((unsigned short)11), ((unsigned short)65524))))));
                arr_4 [i_1 - 1] [(unsigned short)2] [i_0] = ((/* implicit */unsigned int) 4392370611045373242ULL);
                arr_5 [i_1 - 3] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) | (((/* implicit */int) min(((unsigned short)4242), ((unsigned short)65501))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_3] [(signed char)5] [(unsigned char)9] = ((/* implicit */long long int) 14054373462664178345ULL);
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 1] [i_1 - 3] [i_1 - 1]))) : (4284716426U)));
                    }
                    for (long long int i_4 = 2; i_4 < 7; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14054373462664178360ULL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_2]))));
                        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                        arr_15 [i_4] [i_2] [i_2] [i_1 - 4] [8ULL] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_4 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [4U] [i_2] [i_4 - 1]))))) | (arr_14 [i_0] [i_1 - 1] [i_2] [i_4 - 1] [i_2] [i_0])));
                        var_15 = ((/* implicit */long long int) ((signed char) arr_11 [(unsigned short)2]));
                    }
                    var_16 = ((/* implicit */signed char) ((_Bool) 4294967290U));
                    arr_17 [i_2] [5ULL] [4LL] = ((/* implicit */_Bool) 9223372036854775807LL);
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 2] [1LL] [(unsigned short)0] [i_2])) ? (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 3])) : (((((/* implicit */_Bool) arr_11 [0LL])) ? (((/* implicit */int) arr_9 [i_0] [(short)3] [i_2])) : (((/* implicit */int) (unsigned short)23286))))));
                    var_18 = arr_14 [i_0] [i_0] [3ULL] [3ULL] [(unsigned short)2] [i_0];
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    arr_21 [i_5] [i_1 - 3] [i_0] [i_0] = ((/* implicit */_Bool) (-2147483647 - 1));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        arr_26 [(short)9] = ((/* implicit */_Bool) min((max((arr_18 [i_1 + 1] [8U] [i_0]), (arr_18 [i_1 + 1] [i_1 + 1] [0]))), (((unsigned char) (unsigned char)195))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((-2357753468351715093LL) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 4])))))));
                        arr_28 [i_0] [i_1] [i_5] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_14 [i_0] [i_1 - 2] [(unsigned char)9] [i_6] [i_0] [i_1 - 2])))) && ((!(((/* implicit */_Bool) arr_1 [i_1 - 4] [i_1 - 1]))))));
                        var_19 = ((/* implicit */unsigned short) ((_Bool) arr_24 [i_1 + 1] [i_1 - 3]));
                    }
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_29 [(signed char)2] [i_1 - 3])))) ? (max((14054373462664178392ULL), (((/* implicit */unsigned long long int) ((arr_30 [2ULL] [i_1]) | (-9106484350890583423LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1696208575)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)77)))))));
                        var_20 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)81))))) < (((((/* implicit */_Bool) 4969165663984863524LL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (16695437977000274168ULL))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 9223372036854775807LL))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) ((_Bool) arr_32 [8LL] [i_5] [5LL] [i_0]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_5])) % (((/* implicit */int) (signed char)-86))));
                            arr_36 [i_0] [i_5] [(unsigned short)6] [i_9] = ((/* implicit */unsigned int) (-(((unsigned long long int) (unsigned short)55626))));
                            arr_37 [i_0] [i_0] [i_1] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned short) 14054373462664178383ULL);
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((((/* implicit */_Bool) arr_32 [i_1 - 4] [i_1 + 1] [(short)8] [i_0])) ? (arr_19 [i_1 - 3] [(unsigned char)3] [i_1 - 3] [i_1 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))), (((((_Bool) -2149200890404678571LL)) ? (arr_19 [(unsigned short)3] [i_5] [i_5] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (6963336661122193288LL)))))))))));
                            var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-127)) ? (4517910050999997704LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12326))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_33 [1U] [i_1 - 4] [i_5] [i_8] [i_10])))) || (((/* implicit */_Bool) arr_22 [i_1 + 1])))))) : ((-(arr_7 [i_1 - 1] [i_8] [i_10])))));
                            var_26 = ((/* implicit */int) -4122516811508064572LL);
                            arr_41 [i_0] [i_0] [i_1] [(unsigned short)7] [i_5] [i_8] [i_0] = ((/* implicit */unsigned char) (~(((unsigned int) arr_20 [i_1 + 1]))));
                        }
                        arr_42 [0LL] [(unsigned short)9] [i_5] [i_8] [i_1 - 3] [8LL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(-6867845992017620417LL))))));
                    }
                    var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 9106484350890583398LL))) ? (((((/* implicit */_Bool) arr_30 [i_1 - 4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (2537172335009770265ULL))) : (((/* implicit */unsigned long long int) ((int) (short)-1)))));
                    arr_43 [(signed char)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)439)))))));
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (unsigned char)8)))));
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    var_29 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) arr_40 [(_Bool)1] [i_1 + 1] [9LL] [i_1] [i_1])), (1751306096709277441ULL)))));
                    var_30 = ((/* implicit */unsigned short) -6963336661122193281LL);
                    var_31 = (unsigned char)10;
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_33 = ((/* implicit */long long int) (_Bool)0);
                            }
                        } 
                    } 
                    var_34 ^= (!(((/* implicit */_Bool) 2070051928U)));
                }
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0] [(signed char)2] [i_14] [i_14])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        arr_57 [i_14] [i_1 + 1] [(unsigned short)2] = max((((((/* implicit */_Bool) 2027732160536075312ULL)) ? (((long long int) arr_25 [i_0] [i_14] [i_15])) : (max((((/* implicit */long long int) (unsigned short)51937)), (7373412375062695407LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [(unsigned short)3] [i_1 - 3]))))));
                        /* LoopSeq 3 */
                        for (long long int i_16 = 2; i_16 < 6; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3096774477499175807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_0] [i_14] [i_15] [i_16])))))) ? (((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_0] [i_0])) ? (18251642880477328344ULL) : (((/* implicit */unsigned long long int) arr_50 [i_16] [i_16] [i_16 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_0] [i_1 - 2] [i_14])) ? (((/* implicit */int) arr_56 [i_1] [i_14] [i_15] [i_16 + 2])) : (((/* implicit */int) arr_56 [i_15] [i_14] [i_1 - 1] [i_0])))))));
                            var_37 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_33 [i_16] [i_16] [(unsigned short)3] [i_16 + 1] [(unsigned short)7])) ? (((((/* implicit */_Bool) 35179004434720666LL)) ? (7935882439376253337LL) : (((/* implicit */long long int) 1U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_52 [i_0] [i_0] [i_1] [i_1] [i_1] [i_15] [i_16 + 4])))))) << (((((arr_39 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 2] [i_1]) + (2774863815761583311LL))) - (29LL)))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 + 1]))) >= (7935882439376253328LL)));
                            arr_62 [i_17] [i_15] [i_14] [i_15] [i_1 - 3] [i_0] [i_0] &= ((((((/* implicit */_Bool) arr_47 [i_15] [8LL] [i_14] [i_15])) ? (16621648111254000554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21050))))) <= (((/* implicit */unsigned long long int) -8378396832449305187LL)));
                            var_39 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_17] [i_1 - 1] [i_14]))) : (2224915361U))));
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)16359)))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2391403452U))))));
                            arr_65 [i_14] [i_14] [i_14] [i_15] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [0LL] [i_1 - 3] [(_Bool)1])) >> (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_14] [(short)7] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_40 [7LL] [i_1] [7LL] [i_15] [5ULL])) <= (((/* implicit */int) (unsigned short)7)))))) : (arr_47 [i_1 - 4] [i_1 - 4] [i_1 - 3] [i_14])));
                            var_42 = ((/* implicit */unsigned int) (-(2305843009213693952LL)));
                            arr_66 [i_0] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */short) (_Bool)1);
                        }
                        /* LoopSeq 2 */
                        for (short i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)49161)) : (((/* implicit */int) arr_10 [i_14]))))) ? (((/* implicit */int) ((unsigned short) -8388492957209029886LL))) : (((/* implicit */int) ((752367660127239532LL) == (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_19] [i_15] [i_15] [i_14] [0LL] [i_0] [i_0])))))))))));
                            arr_71 [7LL] [i_1 + 1] [i_14] [7LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65517)) != (((/* implicit */int) ((unsigned short) (+(-3803248323781022819LL)))))));
                            arr_72 [i_14] [i_14] [i_14] [i_14] [3LL] [i_14] = 4643671964542073609LL;
                            arr_73 [i_0] [i_0] [5LL] [i_15] [i_19] [i_14] [i_14] = ((/* implicit */int) arr_22 [i_0]);
                        }
                        for (unsigned char i_20 = 2; i_20 < 9; i_20 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((_Bool) (short)-15215)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65528)) != (((/* implicit */int) min(((unsigned short)16389), (((/* implicit */unsigned short) (short)-28855)))))))) : (((((/* implicit */_Bool) (-(arr_68 [i_20 + 1] [(_Bool)1] [(unsigned short)3] [(unsigned short)0] [i_0])))) ? (((/* implicit */int) arr_40 [i_1] [i_1 - 3] [i_1 - 1] [i_1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)26850)))))))));
                            var_45 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1 - 4]))))) ^ (8744266138158044790ULL));
                            arr_77 [i_0] [i_1] [(unsigned short)6] [3ULL] [i_14] = min((((long long int) ((((/* implicit */_Bool) 752367660127239536LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) : (6963336661122193286LL)))), (arr_67 [i_0] [i_1] [i_14] [i_14] [i_20 - 2]));
                            var_46 = arr_30 [i_0] [5LL];
                        }
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((11466552675126486888ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-6963336661122193292LL))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33788)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (4247161216U)))) & (max((arr_68 [i_0] [i_1] [i_14] [i_0] [i_15]), (527765581332480LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_1 - 3] [i_1] [i_14]))) : (8922830604608272098LL))) << (((((((/* implicit */_Bool) arr_59 [i_1 - 2] [i_1 - 4] [i_14])) ? (((/* implicit */int) arr_59 [i_1 - 2] [i_1 + 1] [i_14])) : (((/* implicit */int) (signed char)110)))) - (33111)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                        {
                            arr_82 [i_0] [8ULL] [i_14] [i_21] [i_14] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned short)8636))))));
                            var_49 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) | (((/* implicit */int) arr_10 [i_21])))))))) : (((((/* implicit */_Bool) arr_46 [i_22] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_46 [i_22] [4U] [i_1 - 2] [(_Bool)1])) : (((/* implicit */int) arr_60 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [8LL] [i_1 - 3]))))));
                        }
                    }
                    for (long long int i_23 = 1; i_23 < 8; i_23 += 1) 
                    {
                        var_50 = ((/* implicit */long long int) max((var_50), (((((/* implicit */_Bool) (-(((long long int) (unsigned short)63379))))) ? (((((/* implicit */_Bool) 4927616623110309369ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_14] [i_23 + 1]))) : ((+(-2593590552020115374LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_22 [i_0])) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [0LL]))) : (arr_0 [i_0]))))))))))));
                        var_51 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) (unsigned short)43558)));
                        var_52 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1354943892323476101LL))))));
                    }
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((-3990252181059869114LL), (8119022871360089798LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (((((/* implicit */unsigned long long int) 1740208448231183811LL)) & (((16281268083274195025ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))))));
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)60967))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1300)))))) : (4818051946947699724LL)))));
                    }
                }
            }
        } 
    } 
}
