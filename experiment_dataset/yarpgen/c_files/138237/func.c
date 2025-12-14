/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138237
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)30)))) % (max((((/* implicit */int) var_8)), (min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((1319497431) << (((1319497437) - (1319497437)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_14 -= arr_2 [i_0];
            var_15 *= ((/* implicit */unsigned char) var_12);
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) arr_13 [i_5] [i_0]);
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)25134)) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 - 1])))), (((((/* implicit */int) (unsigned short)36770)) - (((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [i_4 + 1] [i_4 - 1]))))));
                            arr_20 [i_0] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-26439)) ^ (((/* implicit */int) (_Bool)1)))))))), (5777689928422798055ULL)));
                            arr_21 [i_0] [i_0] [i_3] [i_0] [i_2] [i_4] [(short)19] = (unsigned short)5742;
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_16 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_16 [i_0])), (((((/* implicit */_Bool) min((arr_2 [i_2]), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)6] [i_6])) : (14981530245962037082ULL)))));
                            arr_26 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) var_10)), (7817243921926828590ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_6] [i_6] [i_4 - 1] [i_4 - 1] [i_4 - 1] [(unsigned char)8] [i_2])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_4 - 1])) : (((/* implicit */int) arr_8 [i_4 + 1])))), (var_10))))));
                            arr_30 [i_0] [i_2] [i_3] [i_0] [i_4] [i_2] [i_7] = ((/* implicit */_Bool) max((min((min((((/* implicit */int) (signed char)-88)), (387102823))), (((/* implicit */int) arr_2 [i_4 + 1])))), (((/* implicit */int) (unsigned short)22197))));
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_8), (var_6)))) ^ (var_10)))) ? (((((/* implicit */_Bool) (unsigned short)16505)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34457)))) : (((((/* implicit */_Bool) var_6)) ? ((+(1319497431))) : ((-(((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))))))));
                            arr_31 [i_2] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)64628)))) & (((/* implicit */int) (unsigned short)33781))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_19 ^= ((/* implicit */signed char) ((short) min((min(((unsigned short)49057), ((unsigned short)34000))), (((/* implicit */unsigned short) var_5)))));
                            arr_34 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max(((~(arr_11 [i_4 - 1] [i_4 - 1] [i_2]))), (min((((/* implicit */int) var_13)), (arr_11 [i_4 - 1] [i_4] [i_2])))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2)))), (arr_24 [i_0] [(short)18] [i_0])))))));
                        }
                        var_21 ^= (unsigned short)5088;
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!((_Bool)1)))), (max((-955363863), (((/* implicit */int) var_1)))))) >> (((((/* implicit */int) (short)-23100)) + (23129))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)25120)) % (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) max((((short) arr_5 [i_0] [i_0] [i_0])), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), (var_4))))))))))));
            arr_37 [i_9] = (!(arr_13 [i_9] [i_0]));
        }
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            arr_41 [i_10] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (signed char)16))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11159)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) var_5))))))));
            var_24 = min((max((arr_7 [i_10] [i_0] [i_10]), (((/* implicit */unsigned short) ((signed char) arr_1 [i_10]))))), (((unsigned short) max((((/* implicit */unsigned short) (unsigned char)77)), ((unsigned short)43181)))));
        }
        var_25 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */_Bool) 382686006)) || (((/* implicit */_Bool) (unsigned short)25134))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16479))))))), (max((((/* implicit */int) ((((/* implicit */int) (signed char)-96)) > (arr_32 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) arr_9 [(short)10] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)17407))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 24; i_12 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 2; i_13 < 23; i_13 += 3) 
                    {
                        arr_50 [5ULL] [5ULL] [i_12 - 1] [i_13 + 1] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)22689))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))) : (((/* implicit */int) arr_27 [i_13 + 2] [i_11] [i_12 - 1] [i_13] [i_12 - 1])))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_22 [i_0] [i_11] [i_0] [i_13 - 2] [i_0] [i_0] [i_0])), (arr_14 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_13 + 1] [i_13 + 1]))))));
                        arr_51 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)10)))), (((/* implicit */int) min(((short)-14413), (((/* implicit */short) (unsigned char)164)))))))), ((+((-(8710849209685526738ULL)))))));
                        var_26 -= ((/* implicit */short) var_12);
                    }
                    arr_52 [i_0] [(unsigned char)24] [0ULL] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)110)));
                }
            } 
        } 
    }
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        arr_55 [i_14] = ((signed char) ((((/* implicit */int) min(((unsigned short)16478), (((/* implicit */unsigned short) var_5))))) / (((/* implicit */int) max(((unsigned char)155), ((unsigned char)208))))));
        /* LoopNest 3 */
        for (unsigned short i_15 = 2; i_15 < 21; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (short)-7410))));
                        arr_63 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) arr_43 [i_17] [i_15]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_16 [(unsigned short)10]))));
        arr_64 [(unsigned short)18] [i_14] = ((/* implicit */_Bool) min((((/* implicit */int) min(((short)23496), (((/* implicit */short) (signed char)101))))), ((-(((/* implicit */int) (short)14401))))));
    }
    for (unsigned short i_18 = 1; i_18 < 18; i_18 += 3) 
    {
        arr_67 [i_18] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_61 [i_18] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)7743)))), ((+((-(((/* implicit */int) (unsigned char)234))))))));
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) ((((int) arr_65 [i_18])) != (((/* implicit */int) max(((unsigned short)64628), (((/* implicit */unsigned short) (unsigned char)251)))))))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)100))))));
        arr_69 [i_18] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned short)3913)) ? (arr_5 [i_18] [i_18 - 1] [i_18]) : (arr_5 [i_18 - 1] [i_18 + 1] [i_18]))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) 2856753824966687510ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26588)) ? (((/* implicit */int) (unsigned short)23037)) : (((/* implicit */int) (signed char)39))))) ? ((~(((/* implicit */int) arr_17 [i_19] [i_19] [i_19] [i_19] [i_19])))) : (((/* implicit */int) arr_43 [i_19] [i_19]))))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((int) var_4)), (((/* implicit */int) min(((unsigned short)19282), (((/* implicit */unsigned short) (unsigned char)155)))))))))))));
    }
    var_31 = (~(((/* implicit */int) var_9)));
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) & (max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_5))))));
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_7))));
}
