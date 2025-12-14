/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152878
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
    var_11 = ((/* implicit */short) ((var_6) ? (((((/* implicit */int) min((var_3), (var_3)))) ^ (((/* implicit */int) var_3)))) : (max((405994959), (((/* implicit */int) (unsigned char)150))))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 405994959)))))));
    var_13 = ((/* implicit */unsigned char) ((signed char) var_9));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */long long int) (+(405994948)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */int) (unsigned char)0))))) ? (696917180U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_17 -= ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((((/* implicit */int) (short)13738)) & (-871513020))));
                            var_18 = ((/* implicit */unsigned char) ((405994936) << (((((((/* implicit */int) (short)-26741)) + (26769))) - (26)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) / (arr_8 [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13740)) ^ (((/* implicit */int) (short)-32766))));
                            var_21 = ((/* implicit */unsigned short) var_9);
                        }
                        var_22 = ((/* implicit */signed char) (-((+(-999691998)))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32746)) : (arr_16 [i_0]))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)21784)))) > (((/* implicit */int) ((_Bool) 405994923)))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_0] [i_0] [i_5])) || (((/* implicit */_Bool) (unsigned char)0))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(405994910)))) ? (((/* implicit */int) ((999692001) != (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-32746))))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9])) ? (max((13U), (((/* implicit */unsigned int) (unsigned char)50)))) : (((/* implicit */unsigned int) (-(405994944))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) 535237829))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_24 [i_9])))))) : ((+(((/* implicit */int) (signed char)90))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_25 [i_9]))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45973))) < (195676757U)));
        var_30 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) (signed char)89))) >= ((+(((/* implicit */int) (short)13738)))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_9])), (arr_24 [i_9])))))) : (((((/* implicit */_Bool) 2904684056U)) ? (((var_6) ? (((/* implicit */int) arr_25 [(_Bool)1])) : (((/* implicit */int) arr_25 [i_9])))) : (((((/* implicit */int) (short)22660)) ^ (((/* implicit */int) (short)-15845))))))));
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 11; i_10 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_27 [i_10 + 3]) : (((/* implicit */int) arr_24 [i_10 + 1]))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_30 [i_13])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))));
                        var_33 = ((/* implicit */unsigned short) var_2);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) -544449236)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7780))) : (3710106965546528928ULL)));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_11] [i_11 + 2] [i_10])) ? (14736637108163022687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91)))));
            var_36 = arr_34 [i_10 + 3] [i_10] [i_10 + 3];
        }
        for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_30 [i_14 - 1]))) ? (((((/* implicit */_Bool) arr_28 [9ULL])) ? (((/* implicit */int) arr_31 [0ULL] [i_14])) : (1908724385))) : (((/* implicit */int) arr_25 [i_14 - 2]))));
            var_38 = ((/* implicit */unsigned char) (-(arr_30 [(unsigned short)5])));
            /* LoopNest 3 */
            for (long long int i_15 = 4; i_15 < 11; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_37 [i_15] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14736637108163022687ULL))) > (((/* implicit */unsigned long long int) arr_43 [i_10] [i_10])))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-106)) ? (arr_27 [i_10 + 2]) : (((/* implicit */int) arr_35 [i_10 - 1] [i_16] [i_17]))));
                            var_41 = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_26 [10U] [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10 + 1] [i_10 + 1] [i_15] [i_15])))))) - (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_10] [i_10 + 3] [i_14 - 2])) | (((arr_41 [i_10] [i_14] [i_18] [i_18]) & (((/* implicit */int) arr_24 [i_18]))))));
                var_44 = ((unsigned short) ((4294967276U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
            }
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_20 = 1; i_20 < 11; i_20 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */int) arr_35 [i_20] [i_19] [7]);
                var_46 = ((/* implicit */signed char) arr_33 [i_10]);
                var_47 = ((/* implicit */int) ((unsigned long long int) var_4));
            }
            for (signed char i_21 = 1; i_21 < 11; i_21 += 1) /* same iter space */
            {
                var_48 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_19])) : (((/* implicit */int) arr_32 [i_10] [i_19] [i_21]))))) && (((/* implicit */_Bool) ((short) (signed char)69))));
                var_49 = ((/* implicit */unsigned char) (-(((11060850554560858036ULL) << (((arr_40 [i_10]) - (2314023381741480289LL)))))));
            }
            var_50 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)30));
            var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19320)) ? (9221856683427837377LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10] [i_19] [8ULL]))))))));
            var_52 = ((/* implicit */int) (signed char)106);
        }
        var_53 ^= ((/* implicit */unsigned long long int) -405994944);
    }
    var_54 |= var_4;
}
