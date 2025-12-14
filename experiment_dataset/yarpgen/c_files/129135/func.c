/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129135
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
    var_10 = var_2;
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (unsigned short)47154))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) -2098616007)) : ((-(var_6)))))) ? (((2098616006) % (500347635))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) && (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_13 = ((/* implicit */_Bool) (unsigned short)0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) 567631774);
        arr_6 [i_1] = ((/* implicit */unsigned char) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_3 = 3; i_3 < 12; i_3 += 3) /* same iter space */
        {
            arr_11 [i_2] [i_3] = ((/* implicit */signed char) ((long long int) (unsigned char)4));
            arr_12 [i_2] [i_3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) arr_0 [i_3 + 4]))), (((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 1])))));
            arr_13 [i_2] = ((/* implicit */unsigned long long int) (+(arr_7 [i_2] [i_3])));
        }
        for (int i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) arr_10 [i_2] [i_2]);
            var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)38)) | (((/* implicit */int) (unsigned short)55509))));
        }
        for (int i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 14; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_16 = max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) var_6))), (arr_8 [i_5 + 4])))), (max((arr_24 [i_2 + 1] [i_2 + 2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) (unsigned short)54715)))));
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -2098616000)) ? (((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_7])) : (((((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5341))) : (var_0))) | (((unsigned long long int) (short)32763))))));
                    }
                } 
            } 
            arr_26 [i_2] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned short) (((~(var_7))) < (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-58)))))))), (arr_1 [i_2] [i_5])));
        }
        for (int i_8 = 3; i_8 < 12; i_8 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_3))));
            arr_31 [i_2] [(signed char)8] &= ((/* implicit */unsigned long long int) (-(-1832850906)));
            arr_32 [i_2] = ((/* implicit */int) min((min((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2]))))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_2])))));
            arr_33 [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) 8460637279178440048ULL)) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_27 [i_2] [i_2] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_2]))))) : (min((var_6), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))))), (((/* implicit */unsigned long long int) (unsigned char)0))));
        }
        arr_34 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) -2098616010)) : (((unsigned long long int) arr_9 [i_2])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-2LL), (((/* implicit */long long int) -567631775))))) >= (((((/* implicit */_Bool) arr_30 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (var_6)))))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) /* same iter space */
    {
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) | (var_2))) | (((/* implicit */int) ((short) 10U)))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2117895358)) ? (((/* implicit */int) arr_8 [i_9 + 3])) : (((/* implicit */int) arr_8 [i_9]))));
    }
    /* LoopSeq 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) 3911802810928975557ULL);
        var_21 -= (unsigned short)10005;
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((696771817), (((/* implicit */int) arr_1 [i_11] [i_11]))))) & (((arr_39 [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11])))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 4; i_13 < 24; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    {
                        var_23 -= ((((/* implicit */_Bool) -1832850906)) ? (((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */int) (unsigned short)55533)) : (((/* implicit */int) ((arr_42 [i_11] [i_12]) == (var_7)))))) : (((/* implicit */int) ((((((/* implicit */int) arr_40 [i_14])) - (((/* implicit */int) (short)32760)))) != (((/* implicit */int) (unsigned short)13520))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36394))) % (var_4))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_9)))))));
                        arr_49 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) ((arr_0 [i_11]) ^ (0ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */int) arr_46 [i_11] [i_12] [i_12])) & (arr_48 [i_11] [i_11] [i_11] [i_11]))) : (((2098615999) ^ (((/* implicit */int) arr_43 [i_11] [i_11]))))))) : (max((((/* implicit */long long int) (_Bool)1)), (((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_11] [i_14]))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_11]) ^ (((/* implicit */unsigned long long int) 567631774))))) ? (((((/* implicit */_Bool) (unsigned short)55491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9987))) : (17057814920359802279ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (4760075434191860659ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) ((_Bool) 237942734U))))))) : (var_6)));
                    }
                } 
            } 
            arr_50 [i_11] = ((/* implicit */int) max((((/* implicit */short) ((unsigned char) min((((/* implicit */int) (unsigned short)10002)), (-567631756))))), (arr_40 [i_11])));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), ((((-((~(16588767749819523626ULL))))) & (max((((/* implicit */unsigned long long int) 567631755)), (18446744073709551615ULL)))))));
        }
        for (int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) -2)) & (min((((/* implicit */long long int) (-(1094205355)))), (((((/* implicit */_Bool) (signed char)-31)) ? (-8718267681393443216LL) : (((/* implicit */long long int) arr_41 [i_15])))))))))));
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744073709551604ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 567631774)), (3070604049917913668LL))))))) ? (567631755) : (((/* implicit */int) max((((/* implicit */short) (signed char)-127)), (arr_46 [i_11] [i_11] [i_11]))))));
        }
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) (+((+(arr_39 [i_11])))));
            arr_55 [i_11] [i_11] = ((/* implicit */_Bool) (-(var_7)));
        }
        arr_56 [i_11] = ((/* implicit */int) var_1);
        var_30 |= ((/* implicit */unsigned int) (unsigned short)18725);
        arr_57 [i_11] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1857976323890027983ULL))))));
        var_31 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11]))) / (arr_38 [i_11])))));
    }
    var_32 = ((/* implicit */_Bool) ((-10) | (var_2)));
}
