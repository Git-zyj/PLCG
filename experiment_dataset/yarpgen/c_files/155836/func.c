/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155836
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [(unsigned short)0] = ((/* implicit */_Bool) var_16);
        var_19 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((1663086060) < (((/* implicit */int) (signed char)62)))))));
    }
    for (long long int i_1 = 3; i_1 < 6; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 4])) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) (+(((int) 1451600833))));
    }
    for (long long int i_2 = 3; i_2 < 6; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_2 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1451600859)) ? (-1451600879) : (11))))));
        arr_11 [i_2] = ((/* implicit */signed char) min((-1063737072), (-5)));
        var_22 |= ((_Bool) min((max((((/* implicit */int) arr_5 [i_2])), (arr_9 [i_2]))), (((/* implicit */int) ((((/* implicit */int) (signed char)91)) < (((/* implicit */int) var_14)))))));
    }
    /* LoopSeq 4 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) (_Bool)1)) : (min((1), (((/* implicit */int) (unsigned short)24576)))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [i_3]) != (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)))))))) + (arr_13 [18] [i_3])));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_13 [i_4] [i_4])) ^ (max((2069573870U), (((/* implicit */unsigned int) arr_14 [i_4] [i_4]))))))) ? (((/* implicit */int) ((_Bool) arr_15 [i_4]))) : (((-410061012) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        var_26 = ((int) (unsigned short)52636);
        var_27 |= var_5;
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_5] [i_5]), (var_6)))) ? (((/* implicit */int) ((short) arr_17 [i_5]))) : ((~(((((/* implicit */_Bool) arr_16 [(signed char)1] [i_5])) ? (((/* implicit */int) var_5)) : (1030056785)))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                for (short i_8 = 3; i_8 < 20; i_8 += 1) 
                {
                    {
                        arr_25 [11] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_6 + 2] [i_8 + 1] [i_8] [i_8])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 + 2] [i_8 - 2] [i_8] [i_8 - 1]))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_6 - 1] [i_7] [i_8 - 3] [i_8])) & (((/* implicit */int) arr_21 [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1])))))));
                        var_29 = ((/* implicit */int) arr_22 [i_5]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
    {
        var_30 = max(((+(arr_16 [i_9] [i_9]))), (min((((((/* implicit */int) var_14)) & (arr_16 [i_9] [i_9]))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_9] [i_9])) == (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [(short)1]))))))));
        arr_28 [i_9] = ((/* implicit */long long int) var_4);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_33 [i_10] = ((/* implicit */int) ((((long long int) var_18)) - (((/* implicit */long long int) var_15))));
        var_31 += ((/* implicit */int) (+(arr_20 [i_10] [i_10])));
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            var_32 |= min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) % (var_16)))) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) ((_Bool) arr_36 [i_12] [(unsigned char)17]))))), ((+(65504))));
            arr_38 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) 699503180)) - (3628347850U)));
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 23; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        arr_45 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_43 [i_13 + 1] [i_13] [i_13 - 2] [(signed char)5] [i_13]))) ? (((/* implicit */int) ((_Bool) 1152921504606846976ULL))) : (((((/* implicit */_Bool) arr_40 [i_13 - 2] [i_12] [i_11])) ? (arr_43 [i_13 + 1] [i_13] [i_13 - 2] [i_13] [i_13]) : (arr_42 [i_13] [i_13 - 2] [i_11] [i_11])))));
                        var_33 = ((/* implicit */short) ((((arr_42 [i_11] [i_12] [i_13] [i_14]) & (((((/* implicit */_Bool) arr_35 [9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))) != (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 3 */
                        for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11] [11LL])) ? (((/* implicit */unsigned int) max((var_15), (var_15)))) : (((((/* implicit */_Bool) 7505993800742744442ULL)) ? (969526949U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */int) ((short) (+(-1837383759955656579LL))))) : (max((((((/* implicit */int) arr_44 [6ULL])) ^ (arr_42 [i_15] [i_14] [i_13] [i_12]))), (((((/* implicit */_Bool) arr_40 [6LL] [i_13] [i_13])) ? (((/* implicit */int) var_14)) : (var_11)))))));
                            arr_48 [i_11] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) arr_43 [i_15] [i_15] [i_13 - 2] [i_13 - 2] [i_12])));
                        }
                        for (short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_37 [i_13] [i_13 - 2] [i_13 - 2])))) && (((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_13 + 1]))));
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13 - 1])) ? (arr_39 [i_13 - 2]) : (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_13 - 1]))))) : (((((/* implicit */_Bool) arr_39 [i_13 - 2])) ? (arr_39 [i_13 - 1]) : (arr_39 [i_13 - 1]))));
                            var_37 += ((/* implicit */long long int) ((int) ((((/* implicit */int) ((unsigned short) var_5))) ^ (var_11))));
                            arr_51 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7505993800742744434ULL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (short)-1))))) ? (((7505993800742744442ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24558))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134608980)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_16] [i_14] [i_13]))) : (arr_35 [i_12]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_46 [23] [i_13 - 2] [i_13] [i_13] [i_13 - 1])))) : (((((/* implicit */_Bool) arr_47 [i_16] [i_16] [i_14] [i_13 - 2] [i_12] [i_12] [i_11])) ? (((arr_49 [i_16] [i_13] [i_13] [i_12]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))));
                            var_38 = ((/* implicit */short) min((((/* implicit */int) ((7) == ((+(arr_42 [i_11] [i_11] [i_11] [i_11])))))), (((((/* implicit */int) (short)-2078)) - (((/* implicit */int) (unsigned char)254))))));
                        }
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            arr_55 [i_13] [i_13] [i_13] [(signed char)9] [i_13 + 1] [i_13] = ((/* implicit */int) arr_41 [i_11] [i_12]);
                            var_39 = ((/* implicit */unsigned long long int) arr_35 [i_13 - 2]);
                            var_40 = ((/* implicit */unsigned long long int) var_15);
                            arr_56 [i_17] [i_13 - 2] [i_13 - 2] [i_12] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((_Bool) arr_34 [i_11] [i_11]))))));
                            arr_57 [i_17] [i_14] [i_11] [i_11] [i_11] = min((-2099081979), (((/* implicit */int) (unsigned short)50815)));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
        {
            arr_60 [i_18] [i_18] [i_11] = ((/* implicit */unsigned long long int) var_0);
            var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((-8387132161766024109LL) ^ (((/* implicit */long long int) var_6)))))));
            var_42 = ((/* implicit */long long int) ((int) arr_54 [i_11]));
        }
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) != (22))))))) ? (((/* implicit */unsigned long long int) var_11)) : (min((((((/* implicit */_Bool) 504682840)) ? (arr_52 [i_11] [8] [(short)13] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-28))))))))))));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                {
                    var_44 = ((/* implicit */int) max((((var_1) < (((((/* implicit */int) var_18)) & (2021236550))))), (((_Bool) ((((/* implicit */_Bool) (signed char)-22)) || (((/* implicit */_Bool) var_13)))))));
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        arr_68 [19] = ((/* implicit */short) (!(((/* implicit */_Bool) -111306532))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_18))));
                        var_46 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11]));
                        var_47 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_1))) > (arr_39 [i_19])));
                    }
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_64 [i_11] [i_11] [i_11] [i_11]))) ? (((/* implicit */int) ((_Bool) arr_64 [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_11] [i_11] [i_11] [i_11])))))));
        arr_69 [3] [i_11] = ((/* implicit */int) ((((/* implicit */long long int) -1)) < (9223372036854775807LL)));
    }
}
