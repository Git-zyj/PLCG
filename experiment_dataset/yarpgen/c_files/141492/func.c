/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141492
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_4 [(_Bool)1] |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(arr_2 [(unsigned char)10]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [14ULL]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_15 [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_2] [i_3]));
                    arr_16 [i_3] = ((/* implicit */unsigned char) ((signed char) var_5));
                    var_12 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_3]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            {
                var_13 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 97768688U)) ? (3040183133308487225LL) : (((/* implicit */long long int) 97768688U))))));
                arr_23 [i_4] [i_4] [i_4] &= ((/* implicit */signed char) min(((+(var_8))), ((-(arr_22 [i_4] [i_4])))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    arr_26 [i_4] [i_4] [i_4] = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) >= (1550326096)))) / ((~(((/* implicit */int) arr_21 [i_5 - 1])))));
                    arr_27 [i_4] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 1550326110)), (2775151396U)));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_34 [i_8] [i_7] [i_5] [i_4] |= ((/* implicit */long long int) var_0);
                        arr_35 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((1519815888U), (2775151396U)))) <= (min((((4429442968924051197LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)86))))), (((/* implicit */long long int) 1550326094))))));
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_4] [i_5 + 3] [i_7] [i_8])) || (((/* implicit */_Bool) -1420165762))))) | ((~(((/* implicit */int) (unsigned short)30235))))))));
                        arr_37 [i_4] [i_4] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) arr_28 [i_4] [i_5] [i_7]);
                    }
                    arr_38 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */unsigned short) var_10);
                }
                arr_39 [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (unsigned short)39251)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned char) arr_24 [i_9] [i_9] [i_9] [i_9]);
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    arr_47 [i_10] [i_11] = ((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)106)))))));
                    arr_48 [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) -4429442968924051201LL);
                    arr_49 [i_9] = ((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
    {
        arr_52 [i_12] = ((/* implicit */unsigned int) arr_21 [i_12]);
        arr_53 [i_12] = ((/* implicit */_Bool) (-((-(9223372036854775802LL)))));
    }
    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((signed char) min((arr_24 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned int) (unsigned char)126)))));
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_46 [i_13] [i_13] [i_13] [i_14]))))) != (3823087090U))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                arr_62 [i_15] [i_15] [i_15] [i_14] = ((/* implicit */unsigned int) var_3);
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    var_17 += ((/* implicit */unsigned char) ((7092763439523563740LL) % (((/* implicit */long long int) ((/* implicit */int) arr_64 [(unsigned short)1] [i_15] [i_15] [i_16] [(signed char)11])))));
                    var_18 = ((/* implicit */unsigned short) ((_Bool) -4429442968924051182LL));
                    arr_65 [i_16] [i_13] = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_21 [i_13])) == (((/* implicit */int) var_4))))));
                    arr_66 [i_13] [i_14] [i_15] [(unsigned short)1] [i_15] = ((unsigned int) arr_24 [i_13] [i_14] [i_15] [i_16]);
                    arr_67 [i_13] [i_14] [i_15] [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)120)) % (((/* implicit */int) (unsigned short)42269))));
                }
                arr_68 [i_13] [i_14] [14] = ((/* implicit */short) (+(arr_54 [i_15] [i_14])));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 2; i_17 < 15; i_17 += 4) 
                {
                    var_19 -= ((4197198604U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)0))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) -14)))));
                    var_21 = ((/* implicit */_Bool) 5199651049507718356ULL);
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) arr_41 [i_14])) : (arr_25 [i_13] [i_14] [i_15] [i_13])));
            }
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_19 = 3; i_19 < 15; i_19 += 3) /* same iter space */
                {
                    arr_77 [i_13] [i_13] [i_18] = ((((/* implicit */_Bool) var_6)) ? (arr_24 [i_19] [i_19 - 2] [19LL] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [(_Bool)1] [(_Bool)1] [i_14] [i_14] [i_18] [16LL]))));
                    arr_78 [i_13] [i_18] [i_18] [i_19 + 2] = ((/* implicit */signed char) (-(arr_22 [i_18] [i_13])));
                    arr_79 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_73 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_14]))) : (4197198584U)));
                }
                for (long long int i_20 = 3; i_20 < 15; i_20 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && ((_Bool)1)))))))));
                    var_24 ^= ((/* implicit */short) arr_28 [i_13] [i_13] [i_18]);
                }
                for (long long int i_21 = 3; i_21 < 15; i_21 += 3) /* same iter space */
                {
                    arr_86 [i_13] [i_18] [i_18] [i_21 - 1] [(signed char)12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (1519815899U) : (1519815897U)))))) ? (((4429442968924051191LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-3))))) : (arr_61 [i_21 - 1] [i_21 - 2] [i_21 - 1] [i_21 - 3])));
                    arr_87 [i_13] [i_13] [i_13] [i_13] [i_18] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)243)), (6797535749909443914ULL)));
                }
                var_25 -= ((/* implicit */_Bool) (unsigned char)25);
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 3277633250U)) ? (((/* implicit */unsigned long long int) min(((-(var_5))), (((/* implicit */long long int) ((int) arr_21 [i_13])))))) : ((-(14ULL)))));
            }
            /* vectorizable */
            for (unsigned short i_22 = 0; i_22 < 17; i_22 += 1) /* same iter space */
            {
                arr_92 [i_22] = ((/* implicit */int) (_Bool)1);
                var_27 -= ((/* implicit */unsigned int) ((arr_51 [i_22]) >= (((/* implicit */int) arr_46 [i_22] [i_14] [i_13] [i_13]))));
            }
            for (unsigned short i_23 = 0; i_23 < 17; i_23 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_2))));
                arr_96 [i_13] = min(((+((+(var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17001)) / (((/* implicit */int) (unsigned short)15360))))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_0))))))));
                arr_97 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) var_8);
            }
        }
    }
}
